#ifndef COMPILER_H
#define COMPILER_H

// Prevent indirectly including windows.h
#ifndef __GTHREAD_HIDE_WIN32API
#define __GTHREAD_HIDE_WIN32API 1
#endif

#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include "CompilerUtils.h"
#include "Types.h"

namespace ZScript
{
	////////////////////////////////////////////////////////////////
	// Forward Declarations

	// AST.h
	class ASTProgram;

	// ByteCode.h
	class ArgumentVisitor;

	// ZScript.h
	class Program;

	// DataStructs.h
	struct FunctionData;
	struct IntermediateData;
	
	////////////////////////////////////////////////////////////////
	
	class Opcode
	{
	public:
		Opcode() : label(-1) {}
		virtual ~Opcode() {}
		virtual std::string toString()=0;
		int getLabel()
		{
			return label;
		}
		void setLabel(int l)
		{
			label=l;
		}
		std::string printLine(bool showlabel = false)
		{
			char buf[100];
        
			if(label == -1)
				return " " + toString() + "\n";
            
			sprintf(buf, "l%d:", label);
			return (showlabel ? std::string(buf) : " ")+ toString() + "\n";
		}
		Opcode * makeClone()
		{
			Opcode *dup = clone();
			dup->setLabel(label);
			return dup;
		}
		virtual void execute(ArgumentVisitor&, void*) {}
	protected:
		virtual Opcode *clone()=0;
	private:
		int label;
	};

	class ScriptsData
	{
	public:
		ScriptsData(Program&);
		std::map<std::string, std::vector<Opcode *> > theScripts;
		std::map<std::string, ScriptType> scriptTypes;
	};

	ScriptsData *compile(std::string const& filename);

	class ScriptParser
	{
	public:
		static int getUniqueVarID()
		{
			return vid++;
		}
		static int getUniqueFuncID()
		{
			return fid++;
		}
		static int getUniqueLabelID()
		{
			return lid++;
		}
		static int getUniqueGlobalID()
		{
			return gid++;
		}
		static bool preprocess(ASTProgram* root, int reclevel);
		static IntermediateData* generateOCode(FunctionData& fdata);
		static void assemble(IntermediateData* id);
		static void initialize();
		static std::pair<long,bool> parseLong(
				std::pair<std::string,std::string> parts);

		static int const recursionLimit = 30;
	private:
		static std::string prepareFilename(std::string const& filename);
		static std::vector<Opcode *> assembleOne(
				Program& program, std::vector<Opcode*> script,
				int numparams);
		static int vid;
		static int fid;
		static int gid;
		static int lid;
	};
}

#endif

