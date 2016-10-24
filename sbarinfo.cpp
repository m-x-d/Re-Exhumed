StatusBar Normal, forcescaled | fullscreenoffsets 
{
	InInventory not ExCutsceneMarker
	{
		// Background
		DrawImage "HUDBG_L", 0, -42;
		DrawImage "HUDBG_M", -90 + center, -24;
		DrawImage "HUDBG_R", -68, -42;

		//There HAS to be a way to do it more... elegantly...
					 InInventory ExHealthMarker, 33 {
			DrawImage "HPMETER1", -31, -36;
		} else InInventory ExHealthMarker, 32 {
			DrawImage "HPMETER1", -31, -35;
		} else InInventory ExHealthMarker, 31 {
			DrawImage "HPMETER1", -31, -34;
		} else InInventory ExHealthMarker, 30 {
			DrawImage "HPMETER1", -31, -33;
		} else InInventory ExHealthMarker, 29 {
			DrawImage "HPMETER1", -31, -32;
		} else InInventory ExHealthMarker, 28 {
			DrawImage "HPMETER1", -31, -31;
		} else InInventory ExHealthMarker, 27 {
			DrawImage "HPMETER1", -31, -30;
		} else InInventory ExHealthMarker, 26 {
			DrawImage "HPMETER1", -31, -29;
		} else InInventory ExHealthMarker, 25 {
			DrawImage "HPMETER1", -31, -28;
		} else InInventory ExHealthMarker, 24 {
			DrawImage "HPMETER1", -31, -27;
		} else InInventory ExHealthMarker, 23 {
			DrawImage "HPMETER1", -31, -26;
		} else InInventory ExHealthMarker, 22 {
			DrawImage "HPMETER1", -31, -25;
		} else InInventory ExHealthMarker, 21 {
			DrawImage "HPMETER1", -31, -24;
		} else InInventory ExHealthMarker, 20 {
			DrawImage "HPMETER1", -31, -23;
		} else InInventory ExHealthMarker, 19 {
			DrawImage "HPMETER1", -31, -22;
		} else InInventory ExHealthMarker, 18 {
			DrawImage "HPMETER1", -31, -21;
		} else InInventory ExHealthMarker, 17 {
			DrawImage "HPMETER1", -31, -20;
		} else InInventory ExHealthMarker, 16 {
			DrawImage "HPMETER1", -31, -19;
		} else InInventory ExHealthMarker, 15 {
			DrawImage "HPMETER1", -31, -18;
		} else InInventory ExHealthMarker, 14 {
			DrawImage "HPMETER1", -31, -17;
		} else InInventory ExHealthMarker, 13 {
			DrawImage "HPMETER1", -31, -16;
		} else InInventory ExHealthMarker, 12 {
			DrawImage "HPMETER1", -31, -15;
		} else InInventory ExHealthMarker, 11 {
			DrawImage "HPMETER1", -31, -14;
		} else InInventory ExHealthMarker, 10 {
			DrawImage "HPMETER1", -31, -13;
		} else InInventory ExHealthMarker, 9 {
			DrawImage "HPMETER1", -31, -12;
		} else InInventory ExHealthMarker, 8 {
			DrawImage "HPMETER1", -31, -11;
		} else InInventory ExHealthMarker, 7 {
			DrawImage "HPMETER1", -31, -10;
		} else InInventory ExHealthMarker, 6 {
			DrawImage "HPMETER1", -31, -9;
		} else InInventory ExHealthMarker, 5 {
			DrawImage "HPMETER1", -31, -8;
		} else InInventory ExHealthMarker, 4 {
			DrawImage "HPMETER1", -31, -7;
		} else InInventory ExHealthMarker, 3 {
			DrawImage "HPMETER1", -31, -7;
		} else InInventory ExHealthMarker, 2 {
			DrawImage "HPMETER1", -31, -7;
		} else InInventory ExHealthMarker, 1 {
			DrawImage "HPMETER1", -31, -7;
		}

		DrawImage "HP_OVERR", -31, -42;

		//mana bar
					 InInventory ExManaAmmo, 30 {
			DrawImage "MPMETER1", 5, -36;
		} else InInventory ExManaAmmo, 29 {
			DrawImage "MPMETER1", 5, -35;
		} else InInventory ExManaAmmo, 28 {
			DrawImage "MPMETER1", 5, -34;
		} else InInventory ExManaAmmo, 27 {
			DrawImage "MPMETER1", 5, -33;
		} else InInventory ExManaAmmo, 26 {
			DrawImage "MPMETER1", 5, -32;
		} else InInventory ExManaAmmo, 25 {
			DrawImage "MPMETER1", 5, -31;
		} else InInventory ExManaAmmo, 24 {
			DrawImage "MPMETER1", 5, -30;
		} else InInventory ExManaAmmo, 23 {
			DrawImage "MPMETER1", 5, -29;
		} else InInventory ExManaAmmo, 22 {
			DrawImage "MPMETER1", 5, -28;
		} else InInventory ExManaAmmo, 21 {
			DrawImage "MPMETER1", 5, -27;
		} else InInventory ExManaAmmo, 20 {
			DrawImage "MPMETER1", 5, -26;
		} else InInventory ExManaAmmo, 19 {
			DrawImage "MPMETER1", 5, -25;
		} else InInventory ExManaAmmo, 18 {
			DrawImage "MPMETER1", 5, -24;
		} else InInventory ExManaAmmo, 17 {
			DrawImage "MPMETER1", 5, -23;
		} else InInventory ExManaAmmo, 16 {
			DrawImage "MPMETER1", 5, -22;
		} else InInventory ExManaAmmo, 15 {
			DrawImage "MPMETER1", 5, -21;
		} else InInventory ExManaAmmo, 14 {
			DrawImage "MPMETER1", 5, -20;
		} else InInventory ExManaAmmo, 13 {
			DrawImage "MPMETER1", 5, -19;
		} else InInventory ExManaAmmo, 12 {
			DrawImage "MPMETER1", 5, -18;
		} else InInventory ExManaAmmo, 11 {
			DrawImage "MPMETER1", 5, -17;
		} else InInventory ExManaAmmo, 10 {
			DrawImage "MPMETER1", 5, -16;
		} else InInventory ExManaAmmo, 9 {
			DrawImage "MPMETER1", 5, -15;
		} else InInventory ExManaAmmo, 8 {
			DrawImage "MPMETER1", 5, -14;
		} else InInventory ExManaAmmo, 7 {
			DrawImage "MPMETER1", 5, -13;
		} else InInventory ExManaAmmo, 6 {
			DrawImage "MPMETER1", 5, -12;
		} else InInventory ExManaAmmo, 5 {
			DrawImage "MPMETER1", 5, -11;
		} else InInventory ExManaAmmo, 4 {
			DrawImage "MPMETER1", 5, -10;
		} else InInventory ExManaAmmo, 3 {
			DrawImage "MPMETER1", 5, -9;
		} else InInventory ExManaAmmo, 2 {
			DrawImage "MPMETER1", 5, -8;
		} else InInventory ExManaAmmo, 1 {
			DrawImage "MPMETER1", 5, -7;
		}

		DrawImage "HP_OVERL", 5, -42;
		
		//compass
					 InInventory ExDirectionMarker, 7 {
			DrawImage "COMPASS7", -13 + center, -22;
		} else InInventory ExDirectionMarker, 6 {
			DrawImage "COMPASS6", -13 + center, -22;
		} else InInventory ExDirectionMarker, 5 {
			DrawImage "COMPASS5", -13 + center, -22;
		} else InInventory ExDirectionMarker, 4 {
			DrawImage "COMPASS4", -13 + center, -22;
		} else InInventory ExDirectionMarker, 3 {
			DrawImage "COMPASS3", -13 + center, -22;
		} else InInventory ExDirectionMarker, 2 {
			DrawImage "COMPASS2", -13 + center, -22;
		} else InInventory ExDirectionMarker, 1 {
			DrawImage "COMPASS1", -13 + center, -22;
		} else {
			DrawImage "COMPASS0", -13 + center, -22;
		}
		
		//lungs
		InInventory ExUnderwaterAirSupplyMarker 
		{
						 InInventory ExUnderwaterAirSupplyMarker, 12 {
				DrawImage "LNGMTR12", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 11 {
				DrawImage "LNGMTR11", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 10 {
				DrawImage "LNGMTR10", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 9 {
				DrawImage "LNGMTR9", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 8 {
				DrawImage "LNGMTR8", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 7 {
				DrawImage "LNGMTR7", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 6 {
				DrawImage "LNGMTR6", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 5 {
				DrawImage "LNGMTR5", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 4 {
				DrawImage "LNGMTR4", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 3 {
				DrawImage "LNGMTR3", -82 + center, -19;
			} else InInventory ExUnderwaterAirSupplyMarker, 2 {
				DrawImage "LNGMTR2", -82 + center, -19;
			} else {
				DrawImage "LNGMTR1", -82 + center, -19;
			}
		}
		else InInventory not ExHealthMarker
		{
			DrawImage "LNGMTR1", -82 + center, -19;
		}
		else
		{
			DrawImage "LNGANIM1", -82 + center, -19;
		}
		
		//keys
		InInventory ExKey2 { DrawImage "HKEY1", 18 + center, -17; }
		InInventory ExKey1 { DrawImage "HKEY2", 37 + center, -18; }
		InInventory ExKey4 { DrawImage "HKEY3", 54 + center, -17; }
		InInventory ExKey3 { DrawImage "HKEY4", 73 + center, -18; }
		
		//powerups
		InventorybarNotVisible 
		{
			DrawSelectedInventory center, AlwaysShowCounter, ARTIFONT, 18, -21, 36, -32, ArtiFontColor;
		}
		
		//grenades...
					 InInventory ExGrenadeAmmo, 12 {
			DrawImage "GRND12", -42, -32;
		} else InInventory ExGrenadeAmmo, 11 {
			DrawImage "GRND11", -42, -32;
		} else InInventory ExGrenadeAmmo, 10 {
			DrawImage "GRND10", -42, -32;
		} else InInventory ExGrenadeAmmo, 9 {
			DrawImage "GRND9", -42, -32;
		} else InInventory ExGrenadeAmmo, 8 {
			DrawImage "GRND8", -42, -32;
		} else InInventory ExGrenadeAmmo, 7 {
			DrawImage "GRND7", -42, -32;
		} else InInventory ExGrenadeAmmo, 6 {
			DrawImage "GRND6", -42, -32;
		} else InInventory ExGrenadeAmmo, 5 {
			DrawImage "GRND5", -42, -32;
		} else InInventory ExGrenadeAmmo, 4 {
			DrawImage "GRND4", -42, -32;
		} else InInventory ExGrenadeAmmo, 3 {
			DrawImage "GRND3", -42, -32;
		} else InInventory ExGrenadeAmmo, 2 {
			DrawImage "GRND2", -42, -32;
		} else InInventory ExGrenadeAmmo, 1 {
			DrawImage "GRND1", -42, -32;
		}

		//ammo
		DrawNumber 3, AMMOFONT, Untranslated, Ammo1, fillzeros, interpolate(10), -21 + center, -18, 1;
	}
}