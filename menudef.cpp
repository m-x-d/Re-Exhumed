DefaultListMenu 
{
    Selector "M_SEL2", -20, -12
    Font "BIGFONT", "Untranslated"
}

ListMenu "MainMenu" 
{
		StaticPatchCentered 160, 6, "EX_TITLE"

    Position 82, 61
    PatchItem "M_NEW", "n", "PlayerclassMenu"
    
    Position 82, 84
    PatchItem "M_LOAD", "l", "LoadGameMenu"
    
    Position 82, 107
    PatchItem "M_SAVE", "s", "SaveGameMenu"
    
    Position 82, 130
    PatchItem "M_OPT","o", "OptionsMenu"
    
    Position 82, 153
    PatchItem "M_QUIT", "q", "NewQuitMenu"
}

ListMenu "EpisodeMenu"
{
		StaticPatchCentered 160, 6, "EX_TITLE"
		
		Linespacing 23
		Position 82, 61
}

OptionMenuSettings 
{
		Linespacing 18
}

ListMenu "LoadGameMenu" 
{
	StaticTextCentered 160, -10, "Load game"
	Position 80, 50
	Class "LoadMenu"
}

ListMenu "SaveGameMenu" 
{
	StaticTextCentered 160, -10, "Save game"
	Position 80, 50
	Class "SaveMenu"
}

OptionMenu "NewQuitMenu" 
{
	 Position 120
   StaticText "Do you really want to quit?", 1
   Command "                            Yes", "quit"
   Submenu "No", "MainMenu"
}
