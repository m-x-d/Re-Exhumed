//SPLASHES
splash ExLavaSplash 
{
    SmallSound "explayer/footsteps/lava"
    Sound "explayer/footsteps/lava"
}

splash ExSandSplash 
{
    SmallSound "misc/silence" //is there a better way to do this?
    Sound "explayer/footsteps/land_sand"
}

splash ExStoneSplash 
{
    SmallSound "misc/silence" //is there a better way to do this?
    Sound "explayer/footsteps/land_stone"
}

splash ExWaterSplash 
{
    SmallClass ExWaterSplashSmall
    SmallSound "water/splash_small"
    
    BaseClass ExWaterSplash

    Sound "explayer/footsteps/land_water"
}

//TERRAINS
terrain ExLava 
{
   Splash ExLavaSplash
   Friction 0.7
   FootClip 8
   DamageType "Extreme"
   DamageAmount 10
   DamageTimeMask 10
   Liquid
}

terrain ExSand 
{
   Splash ExSandSplash
}

terrain ExStone 
{
   Splash ExStoneSplash
}

terrain ExWater 
{
   Splash ExWaterSplash
   Friction 0.8
   FootClip 6
   Liquid
}

DefaultTerrain ExStone

//FLATS
//lava
floor ART375 ExLava
floor ART388 ExLava

//sand
floor ART178 ExSand
floor ART356 ExSand

//water
floor ART305 ExWater
