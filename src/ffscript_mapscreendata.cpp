case MAPDATAVALID:		SET_MAPDATA_VAR_BYTE(valid,	//b
case MAPDATAGUY: 		SET_MAPDATA_VAR_BYTE(guy,	//b
case MAPDATASTRING:		SET_MAPDATA_VAR_INT32(str,	//w
case MAPDATAROOM: 		SET_MAPDATA_VAR_BYTE(room,	//b
case MAPDATAITEM: 		SET_MAPDATA_VAR_BYTE(item,	//b
case MAPDATAHASITEM: 		SET_MAPDATA_VAR_BYTE(hasitem,	//b
case MAPDATATILEWARPTYPE: 	SET_MAPDATA_BYTE_INDEX(tilewarptype,	//b, 4 of these
case MAPDATATILEWARPOVFLAGS: 	SET_MAPDATA_VAR_BYTE(tilewarpoverlayflags,	//b, tilewarpoverlayflags
case MAPDATADOORCOMBOSET: 	SET_MAPDATA_VAR_INT32(door_combo_set,	//w
case MAPDATAWARPRETX:	 	SET_MAPDATA_BYTE_INDEX(warpreturnx,	//b, 4 of these
case MAPDATAWARPRETY:	 	SET_MAPDATA_BYTE_INDEX(warpreturny,	//b, 4 of these
case MAPDATAWARPRETURNC: 	SET_MAPDATA_VAR_INT32(warpreturnc,	//w
case MAPDATASTAIRX: 		SET_MAPDATA_VAR_BYTE(stairx,	//b
case MAPDATASTAIRY: 		SET_MAPDATA_VAR_BYTE(stairy,	//b
case MAPDATAITEMX:		SET_MAPDATA_VAR_BYTE(itemx,		//itemx
case MAPDATAITEMY:		SET_MAPDATA_VAR_BYTE(itemy,		//itemy
case MAPDATACOLOUR: 		SET_MAPDATA_VAR_INT32(color,	//w
case MAPDATAENEMYFLAGS: 	SET_MAPDATA_VAR_BYTE(enemyflags,	//b
case MAPDATADOOR: 		SET_MAPDATA_BYTE_INDEX(door,	//b, 4 of these
case MAPDATATILEWARPDMAP: 	SET_MAPDATA_VAR_INDEX32(tilewarpdmap,	//w, 4 of these
case MAPDATATILEWARPSCREEN: 	SET_MAPDATA_BYTE_INDEX(tilewarpscr,	//b, 4 of these
case MAPDATAEXITDIR: 		SET_MAPDATA_VAR_BYTE(exitdir,	//b
case MAPDATAENEMY: 		SET_MAPDATA_VAR_INDEX32(enemy,	//w, 10 of these
case MAPDATAPATTERN: 		SET_MAPDATA_VAR_BYTE(pattern,	//b
case MAPDATASIDEWARPTYPE: 	SET_MAPDATA_BYTE_INDEX(sidewarptype,	//b, 4 of these
case MAPDATASIDEWARPOVFLAGS: 	SET_MAPDATA_VAR_BYTE(sidewarpoverlayflags,	//b
case MAPDATAWARPARRIVALX: 	SET_MAPDATA_VAR_BYTE(warparrivalx,	//b
case MAPDATAWARPARRIVALY: 	SET_MAPDATA_VAR_BYTE(warparrivaly,	//b
case MAPDATAPATH: 		SET_MAPDATA_BYTE_INDEX(path,	//b, 4 of these
case MAPDATASIDEWARPSC: 	SET_MAPDATA_BYTE_INDEX(sidewarpscr,	//b, 4 of these
case MAPDATASIDEWARPDMAP: 	SET_MAPDATA_VAR_INDEX32(sidewarpdmap,	//w, 4 of these
case MAPDATASIDEWARPINDEX: 	SET_MAPDATA_VAR_BYTE(sidewarpindex,	//b
case MAPDATAUNDERCOMBO: 	SET_MAPDATA_VAR_INT32(undercombo,	//w
case MAPDATAUNDERCSET:	 	SET_MAPDATA_VAR_BYTE(undercset,	//b
case MAPDATACATCHALL:	 	SET_MAPDATA_VAR_INT32(catchall,	//W
case MAPDATAFLAGS: 
{
	int flagid = 
	switch(flagid)
	{
		case 0: flags
		case 1: flags2
		case 10: flags10
	}
	//SET_MAPDATA_BYTE_INDEX	//B, 11 OF THESE, flags, flags2-flags10
}
case MAPDATACSENSITIVE: 	SET_MAPDATA_VAR_BYTE(csensitive,	//B
case MAPDATANORESET: 		SET_MAPDATA_VAR_INT32(noreset,	//W
case MAPDATANOCARRY: 		SET_MAPDATA_VAR_INT32(nocarry,	//W
case MAPDATALAYERMAP:	 	SET_MAPDATA_BYTE_INDEX(layermap,	//B, 6 OF THESE
case MAPDATALAYERSCREEN: 	SET_MAPDATA_BYTE_INDEX(layerscreen,	//B, 6 OF THESE
case MAPDATALAYEROPACITY: 	SET_MAPDATA_BYTE_INDEX(layeropacity,	//B, 6 OF THESE
case MAPDATATIMEDWARPTICS: 	SET_MAPDATA_VAR_INT32(timedwarptics,	//W
case MAPDATANEXTMAP: 		SET_MAPDATA_VAR_BYTE(nextmap,	//B
case MAPDATANEXTSCREEN: 	SET_MAPDATA_VAR_BYTE(nextscr,	//B
case MAPDATASECRETCOMBO: 	SET_MAPDATA_VAR_INDEX32(secretcombo,	//W, 128 OF THESE
case MAPDATASECRETCSET: 	SET_MAPDATA_BYTE_INDEX(secretcset,	//B, 128 OF THESE
case MAPDATASECRETFLAG: 	SET_MAPDATA_BYTE_INDEX(secretflag	//B, 128 OF THESE
case MAPDATAVIEWX: 		SET_MAPDATA_VAR_INT32(viewX,	//W
case MAPDATAVIEWY: 		SET_MAPDATA_VAR_INT32(viewY,//W
case MAPDATASCREENWIDTH: 	SET_MAPDATA_VAR_BYTE(scrWidth,	//B
case MAPDATASCREENHEIGHT: 	SET_MAPDATA_VAR_BYTE(scrHeight,	//B
case MAPDATAENTRYX: 		SET_MAPDATA_VAR_BYTE(entry_x,	//B
case MAPDATAENTRYY: 		SET_MAPDATA_VAR_BYTE(entry_y,	//B
case MAPDATANUMFF: 		SET_MAPDATA_VAR_INT16(numff,	//INT16
case MAPDATAFFDATA: 		SET_MAPDATA_VAR_INDEX32(ffdata,	//W, 32 OF THESE
case MAPDATAFFCSET: 		SET_MAPDATA_BYTE_INDEX(ffcset,	//B, 32
case MAPDATAFFDELAY: 		SET_MAPDATA_VAR_INDEX32(ffdelay,	//W, 32
case MAPDATAFFX: 		SET_MAPDATA_VAR_INDEX32(ffx,	//INT32, 32 OF THESE
case MAPDATAFFY: 		SET_MAPDATA_VAR_INDEX32(ffy,	//..
case MAPDATAFFXDELTA:	 	SET_MAPDATA_VAR_INDEX32(ffxdelta,	//..
case MAPDATAFFYDELTA: 		SET_MAPDATA_VAR_INDEX32(ffydelta,	//..
case MAPDATAFFXDELTA2:	 	SET_MAPDATA_VAR_INDEX32(ffxdelta2,	//..
case MAPDATAFFYDELTA2:	 	SET_MAPDATA_VAR_INDEX32(ffydelta2,	//..
case MAPDATAFFFLAGS: 		SET_MAPDATA_VAR_INDEX16(ffflags,	//INT16, 23 OF THESE
case MAPDATAFFWIDTH: 		SET_MAPDATA_BYTE_INDEX(ffwidth,	//B, 32 OF THESE
case MAPDATAFFHEIGHT:	 	SET_MAPDATA_BYTE_INDEX(ffheight,	//B, 32 OF THESE
case MAPDATAFFLINK: 		SET_MAPDATA_BYTE_INDEX(fflink,	//B, 32 OF THESE
case MAPDATAFFSCRIPT:	 	SET_MAPDATA_VAR_INDEX32(ffscript,	//W, 32 OF THESE
//case MAPDATAINTID: 		initd	//INT32 , 32 OF THESE, EACH WITH 10 INDICES. 
//case MAPDATAINITA: 		inita	//INT32, 32 OF THESE, EACH WITH 2
case MAPDATAFFINITIALISED: 	SET_MAPDATA_BOOL_INDEX(initialized,	//BOOL, 32 OF THESE
case MAPDATASCRIPTENTRY: 	SET_MAPDATA_VAR_INT32(script_entry,	//W
case MAPDATASCRIPTOCCUPANCY: 	SET_MAPDATA_VAR_INT32(script_occupancy,	//W
case MAPDATASCRIPTEXIT: 	SET_MAPDATA_VAR_INT32(script_exit,	//W
case MAPDATAOCEANSFX:	 	SET_MAPDATA_VAR_BYTE(oceansfx,	//B
case MAPDATABOSSSFX: 		SET_MAPDATA_VAR_BYTE(bosssfx,	//B
case MAPDATASECRETSFX:	 	SET_MAPDATA_VAR_BYTE(secretsfx,	//B
case MAPDATAHOLDUPSFX:	 	SET_MAPDATA_VAR_BYTE(holdupsfx,	//B
case MAPDATASCREENMIDI: 	SET_MAPDATA_VAR_INT16(screen_midi,	//SHORT, OLD QUESTS ONLY?
case MAPDATALENSLAYER:	 	SET_MAPDATA_VAR_BYTE(lens_layer,	//B, OLD QUESTS ONLY?