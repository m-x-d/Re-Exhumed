gameinfo 
{
	infopage = "EXHELP1", "EXHELP2"
	pagetime = 0
	quitsound = "misc/silence"
	titlepage = "EXTITLE"
	creditpage = "EXTITLE"
	pickupcolor = "e5d202"
	dimcolor = "000000"
	dimamount = 0.5
	cursorpic = "EXCURSOR"
	menubackbutton = "M_BACK"
	pausesign = "PAUSED"
	playerclasses = "ExPlayer"
	borderflat = "SBORDER"
	border = 4, 4, "BRDR_TR", "BRDR_T", "BRDR_TL", "BRDR_R", "BRDR_L", "BRDR_BR", "BRDR_B", "BRDR_BL"
	intermissioncounter = false
	skyflatname = "F_SKY"
	menufontcolor_title = "Untranslated"
	noinventorybar = true
	quitmessages = "Do you really want to quit?"
	maparrow = "graphics/MapArrow.txt"
}

////////////
//EPISODES//
////////////
clearepisodes
episode MAP00 
{
	noskillmenu
	name = "Training Day"
	picname = "M_TRAIN"
	key = "t"
}
episode MAP01 
{
	noskillmenu
	name = "Re-Exhumed"
	picname = "M_REEX"
	key = "r"
}

////////
//MAPS//
////////
defaultmap 
{
	MapBackground = "MAP_BG"
	AirSupply = 15
	LightMode = 0
	EvenLighting 
	UsePlayerStartZ
	CheckSwitchRange
	FallingDamage
	MonsterFallingDamage
	StrictMonsterActivation
	ForceNoSkyStretch
	AllowJump
	AllowCrouch
	NoIntermission

	//Fog definitons
	OutsideFog = "a4 db eb"
	Fade = "57 4f 43"
	FogDensity = 96
	OutsideFogDensity = 16
}

map TITLEMAP "Menu" 
{
	PixelRatio = 1.0
	NoAutosaveHint
	Fade = "00 00 00"
	FogDensity = 255
}

map MAP00 "Training Day" 
{
	PixelRatio = 1.0
	Music = "Rusted"
	Next = "TITLEMAP"
}

map MAP01 "Abu Simbel" 
{
	PixelRatio = 1.0
	Music = "Duat_P2"
	Next = "MAP02"
	ResetHealth
	ResetInventory
}

map MAP02 "Dendur" 
{
	PixelRatio = 1.0
	Music = "Pilgrims"
	Next = "TITLEMAP"
	OutsideFog = "ab d0 d9"
}

