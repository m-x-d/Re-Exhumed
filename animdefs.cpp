////////////
//SWITCHES//
////////////
switch ART300 on sound switches/switch1 pic ART301 tics 0

//////////////////
//HUD ANIMATIONS//
//////////////////
texture HPMETER1
	pic HPMETER1 tics 4
	pic HPMETER2 tics 4
	pic HPMETER3 tics 4
	pic HPMETER4 tics 4
	pic HPMETER5 tics 4
	pic HPMETER6 tics 4
	
texture MPMETER1
	pic MPMETER1 tics 4
	pic MPMETER2 tics 4
	pic MPMETER3 tics 4
	pic MPMETER4 tics 4
	pic MPMETER5 tics 4
	pic MPMETER6 tics 4
	
texture LNGANIM1
	pic LNGANIM1 tics 60
	pic LNGANIM2 tics 16
	pic LNGANIM3 tics 30
	pic LNGANIM4 tics 16

////////////
//POWERUPS//
////////////
//torch
texture PTRCA0
	pic PTRCA0 tics 4
	pic PTRCB0 tics 4
	pic PTRCC0 tics 4
	pic PTRCD0 tics 4
	pic PTRCE0 tics 4
	pic PTRCF0 tics 4
	pic PTRCG0 tics 4
	pic PTRCH0 tics 4

//invisibility
texture PINVA0
	pic PINVA0 rand 660 1200
	pic PINVB0 tics 4
	pic PINVC0 tics 4
	pic PINVD0 tics 4
	pic PINVE0 tics 4
	pic PINVF0 rand 36 65
	pic PINVE0 rand 4 8
	pic PINVF0 rand 16 28
	pic PINVE0 tics 4
	pic PINVD0 tics 4
	pic PINVC0 tics 4
	pic PINVB0 tics 4

//full life
texture PHRTA0
	pic PHRTA0 rand 60 100
	pic PHRTB0 tics 5
	pic PHRTC0 tics 5
	pic PHRTD0 tics 5

//Weapon power
texture PHNDA0
	pic PHNDA0 rand 300 500
	pic PHNDB0 tics 4
	pic PHNDA0 tics 4
	pic PHNDB0 tics 4
	pic PHNDA0 tics 4
	
//scare
texture PSCRA0
	pic PSCRA0 rand 300 500
	pic PSCRB0 tics 4
	pic PSCRC0 tics 4
	pic PSCRD0 tics 4
	pic PSCRE0 tics 4
	pic PSCRF0 tics 4
	pic PSCRG0 tics 4
	pic PSCRH0 tics 4

/////////////////////
//ANIMATED TEXTURES//
/////////////////////
texture A128_01 range A128_16 tics 4 //ART128 with caustics
texture A129_01 range A129_16 tics 4 //ART129 with caustics
texture A132_01 range A132_16 tics 4 //ART132 with caustics
texture A147_01 range A147_16 tics 4 //ART147 with caustics
texture A148_01 range A148_16 tics 4 //ART148 with caustics
texture A154_01 range A154_16 tics 4 //ART154 with caustics
texture UWSAND01 range UWSAND16 tics 4 //ART178 with caustics
texture UWPEBL01 range UWPEBL16 tics 4 //ART179 with caustics
texture UWSTON01 range UWSTON16 tics 4 //ART3370 with caustics
texture UWSTN201 range UWSTN216 tics 4 //ART244 with caustics
texture UWSTN301 range UWSTN316 tics 4 //ART323 with caustics
texture ART400 range ART401 tics 6 //lava_wall1
texture ART358 range ART359 tics 6 //lava_wall2
texture LWALL11 range LWALL12 tics 6 //tall lava_wall1
texture LWALL21 range LWALL22 tics 6 //tall lava_wall2
texture LSHAFT01 range LSHAFT16 tics 6 //lightshaft1

texture ART375 //lava 1
	pic LAVA1_01 tics 2
	pic LAVA1_02 tics 2
	pic LAVA1_03 tics 2
	pic LAVA1_04 tics 2
	pic LAVA1_05 tics 2
	pic LAVA1_06 tics 2
	pic LAVA1_07 tics 2
	pic LAVA1_08 tics 2
	pic LAVA1_09 tics 2
	pic LAVA1_10 tics 2
	pic LAVA1_11 tics 2
	pic LAVA1_12 tics 2
	pic LAVA1_13 tics 2
	pic LAVA1_14 tics 2
	pic LAVA1_15 tics 2
	pic LAVA1_16 tics 2
	
texture ART388 //lava2
	pic LAVA2_01 tics 2
	pic LAVA2_02 tics 2
	pic LAVA2_03 tics 2
	pic LAVA2_04 tics 2
	pic LAVA2_05 tics 2
	pic LAVA2_06 tics 2
	pic LAVA2_07 tics 2
	pic LAVA2_08 tics 2
	pic LAVA2_09 tics 2
	pic LAVA2_10 tics 2
	pic LAVA2_11 tics 2
	pic LAVA2_12 tics 2
	
texture ART461 //lava_rocks
	pic LAVAR_01 tics 2
	pic LAVAR_02 tics 2
	pic LAVAR_03 tics 2
	pic LAVAR_04 tics 2
	pic LAVAR_05 tics 2
	pic LAVAR_06 tics 2
	pic LAVAR_07 tics 2
	pic LAVAR_08 tics 2
	pic LAVAR_09 tics 2
	pic LAVAR_10 tics 2
	pic LAVAR_11 tics 2
	pic LAVAR_12 tics 2
	
texture ART305 //water1
	pic WTR1_01 tics 5
	pic WTR1_02 tics 5
	pic WTR1_03 tics 5
	pic WTR1_04 tics 5
	pic WTR1_05 tics 5
	pic WTR1_06 tics 5
	pic WTR1_07 tics 5
	pic WTR1_08 tics 5
	pic WTR1_09 tics 5
	pic WTR1_10 tics 5
	pic WTR1_11 tics 5
	pic WTR1_12 tics 5
	pic WTR1_13 tics 5
	pic WTR1_14 tics 5
	pic WTR1_15 tics 5
	pic WTR1_16 tics 5
	
texture ART310 //water2
	pic WTR2_01 tics 5
	pic WTR2_02 tics 5
	pic WTR2_03 tics 5
	pic WTR2_04 tics 5
	pic WTR2_05 tics 5
	pic WTR2_06 tics 5
	pic WTR2_07 tics 5
	pic WTR2_08 tics 5
	pic WTR2_09 tics 5
	pic WTR2_10 tics 5
	pic WTR2_11 tics 5
	pic WTR2_12 tics 5
	pic WTR2_13 tics 5
	pic WTR2_14 tics 5
	pic WTR2_15 tics 5
	pic WTR2_16 tics 5
	
texture ART314 //water3
	pic WTR3_01 tics 5
	pic WTR3_02 tics 5
	pic WTR3_03 tics 5
	pic WTR3_04 tics 5
	pic WTR3_05 tics 5
	pic WTR3_06 tics 5
	pic WTR3_07 tics 5
	pic WTR3_08 tics 5
	pic WTR3_09 tics 5
	pic WTR3_10 tics 5
	pic WTR3_11 tics 5
	pic WTR3_12 tics 5
	
texture ART320 //water4
	pic WTR4_01 tics 5
	pic WTR4_02 tics 5
	pic WTR4_03 tics 5
	pic WTR4_04 tics 5
	pic WTR4_05 tics 5
	pic WTR4_06 tics 5
	pic WTR4_07 tics 5
	pic WTR4_08 tics 5
	pic WTR4_09 tics 5
	pic WTR4_10 tics 5
	pic WTR4_11 tics 5
	pic WTR4_12 tics 5
	
texture ART15 //water_grate
	pic WTRG_01 tics 2
	pic WTRG_02 tics 2
	pic WTRG_03 tics 2
	pic WTRG_04 tics 2
	pic WTRG_05 tics 2
	pic WTRG_06 tics 2
	pic WTRG_07 tics 2
	pic WTRG_08 tics 2
	pic WTRG_09 tics 2
	pic WTRG_10 tics 2
	pic WTRG_11 tics 2
	pic WTRG_12 tics 2
	
texture ART20 //water_head
	pic WHEAD_01 tics 2
	pic WHEAD_02 tics 2
	pic WHEAD_03 tics 2
	pic WHEAD_04 tics 2
	pic WHEAD_05 tics 2
	pic WHEAD_06 tics 2
	pic WHEAD_07 tics 2
	pic WHEAD_08 tics 2
	pic WHEAD_09 tics 2
	pic WHEAD_10 tics 2
	pic WHEAD_11 tics 2
	pic WHEAD_12 tics 2
	pic WHEAD_11 tics 2
	pic WHEAD_10 tics 2
	pic WHEAD_09 tics 2
	pic WHEAD_08 tics 2
	pic WHEAD_07 tics 2
	pic WHEAD_06 tics 2
	pic WHEAD_05 tics 2
	pic WHEAD_04 tics 2
	pic WHEAD_03 tics 2
	pic WHEAD_02 tics 2
	
texture ART28 //water_wall
	pic WWALL_01 tics 2
	pic WWALL_02 tics 2
	pic WWALL_03 tics 2
	pic WWALL_04 tics 2
	pic WWALL_05 tics 2
	pic WWALL_06 tics 2
	pic WWALL_07 tics 2
	pic WWALL_08 tics 2
	pic WWALL_09 tics 2
	pic WWALL_10 tics 2
	pic WWALL_11 tics 2
	pic WWALL_12 tics 2
	
//////////////
//locked doors
//////////////

//golden, key1
texture LDOORA1A
	pic LDOORA1A rand 100 200
	pic LDOORA1B tics 4
	pic LDOORA1C tics 4
	pic LDOORA1D tics 10
	pic LDOORA1C tics 4
	pic LDOORA1B tics 4

//golden, key2
texture LDOORA2A
	pic LDOORA2A rand 100 200
	pic LDOORA2B tics 4
	pic LDOORA2C tics 4
	pic LDOORA2D tics 10
	pic LDOORA2C tics 4
	pic LDOORA2B tics 4
	
//golden, key3
texture LDOORA3A
	pic LDOORA3A rand 100 200
	pic LDOORA3B tics 4
	pic LDOORA3C tics 4
	pic LDOORA3D tics 10
	pic LDOORA3C tics 4
	pic LDOORA3B tics 4
	
//golden, key4
texture LDOORA4A
	pic LDOORA4A rand 100 200
	pic LDOORA4B tics 4
	pic LDOORA4C tics 4
	pic LDOORA4D tics 10
	pic LDOORA4C tics 4
	pic LDOORA4B tics 4			


////////
//WARP//
////////
//warp flat ART375