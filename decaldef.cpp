//ANIMATORS
fader ExAnubisScorchFader 
{
	DecayStart 5.0
	DecayTime 5.0
}

fader ExBulletHoleFader 
{
	DecayStart 0.0
	DecayTime 1.0
}

fader ExFireballFader 
{
	DecayStart 5.0
	DecayTime 5.0
}


//DECALS
//bullet holes
decal ExBulletHoleLower 
{
	pic BULTHOLE
	x-scale 0.2
	y-scale 0.2
	randomflipx
	randomflipy
}

decal ExBulletHole 
{
	pic BCTRA0
	x-scale 0.05
	y-scale 0.05
	fullbright
	lowerdecal ExBulletHoleLower
	animator ExBulletHoleFader
}

//anubis missile
decal ExAnubisMissileScorch1 
{
	pic NPRXB0
	x-scale 0.2
	y-scale 0.2
	translucent  0.85
	fullbright
	randomflipx
	randomflipy
	animator ExAnubisScorchFader
}

decal ExAnubisMissileScorch2 
{
	pic NPRXC0
	x-scale 0.2
	y-scale 0.2
	translucent 0.85
	fullbright
	randomflipx
	randomflipy
	animator ExAnubisScorchFader
}

decalgroup ExAnubisMissileScorch 
{
	ExAnubisMissileScorch1 1
	ExAnubisMissileScorch2 1
}

//fireball
decal ExFireballScorch
{
	pic FBALX0
	x-scale 0.6
	y-scale 0.6
	translucent 0.85
	randomflipx
	randomflipy
	animator ExFireballFader
}

//BLOOD DECALS
decal BloodSplat1
{
	pic BLDWA0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.6
	randomflipx
	randomflipy
}

decal BloodSplat2
{
	pic BLDWB0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.6
	randomflipx
	randomflipy
}

decal BloodSplat3
{
	pic BLDWC0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.65
	randomflipx
	randomflipy
}

decal BloodSplat4
{
	pic BLDWD0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.7
	randomflipx
}

decal BloodSplat5
{
	pic BLDWE0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.75
	randomflipx
}

decal BloodSplat6
{
	pic BLDWF0
	shade "BloodDefault"
	x-scale 0.75
	y-scale 0.75
	translucent 0.85
	randomflipx
}

// The smaller blood splats are more common than the big ones.
decalgroup BloodSplat
{
	BloodSplat1	5
	BloodSplat2	5
	BloodSplat3	5
	BloodSplat4	3
	BloodSplat5	2
	BloodSplat6	1
}

decal BloodSmear1
{
	pic BLDWA0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
	randomflipy
}

decal BloodSmear2
{
	pic BLDWB0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
	randomflipy
}

decal BloodSmear3
{
	pic BLDWC0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
	randomflipy
}

decal BloodSmear4
{
	pic BLDWD0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
}

decal BloodSmear5
{
	pic BLDWE0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
}

decal BloodSmear6
{
	pic BLDWF0
	x-scale 1.0
	y-scale 1.0
	shade "BloodDefault"
	randomflipx
}

decalgroup BloodSmear
{
	BloodSmear1	5
	BloodSmear2	5
	BloodSmear3	5
	BloodSmear4	3
	BloodSmear5	2
	BloodSmear6	1
}