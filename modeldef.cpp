//PALMS - SKYBOXES - SPLATS - LEVEL - MISC

//PALMS
Model ExPalmTree1 
{
	Path "models/vegetation/"
	Model 0 "palmtree.md3"
	Skin 0 "palmtree.png"
	Scale 0.7 0.7 0.7
	ZOffset -4.0
	
	INHERITACTORPITCH
	INHERITACTORROLL

	FrameIndex PALM A 0 0
}

Model ExPalmTree2 
{
	Path "models/vegetation/"
	Model 0 "palmtree2.md3"
	Skin 0 "palmtree.png"
	Scale 0.7 0.7 0.7
	ZOffset -4.0
	
	INHERITACTORPITCH
	INHERITACTORROLL

	FrameIndex PALM A 0 0
}

Model ExPalmTree3 
{
	Path "models/vegetation/"
	Model 0 "palmtree3.md3"
	Skin 0 "palmtree.png"
	Scale 0.7 0.7 0.7
	ZOffset -4.0
	
	INHERITACTORPITCH
	INHERITACTORROLL

	FrameIndex PALM A 0 0
}

//SKYBOXES STUFF
//MR. BIRD
Model ExSkyBird 
{
	Path "models/sky/"
	Model 0 "skybird.md3"
	Skin 0 "skybird.png"
	Scale 0.1 0.1 0.1

	FrameIndex SBRD A 0 0
	FrameIndex SBRD B 0 1
	FrameIndex SBRD C 0 2
	FrameIndex SBRD D 0 3
	FrameIndex SBRD E 0 4
	FrameIndex SBRD F 0 5
	FrameIndex SBRD G 0 6
	FrameIndex SBRD H 0 7
	FrameIndex SBRD I 0 8
	FrameIndex SBRD J 0 9
	FrameIndex SBRD K 0 10
	FrameIndex SBRD L 0 11
	FrameIndex SBRD M 0 12
	FrameIndex SBRD N 0 13
	FrameIndex SBRD O 0 14
	FrameIndex SBRD P 0 15
	FrameIndex SBRD Q 0 16
	FrameIndex SBRD R 0 17
	FrameIndex SBRD S 0 18
	FrameIndex SBRD T 0 19
}

//sunny day
Model ExSkyDome 
{
	Path "models/sky/"
	Model 0 "skydome.md3"
	Skin 0 "sky_day1.png"
	Scale 2.0 2.0 2.0

	FrameIndex SKY1 A 0 0
}

//sunny midday
Model ExSkyDome2 
{
	Path "models/sky/"
	Model 0 "skydome.md3"
	Skin 0 "sky_midday.png"
	Scale 2.0 2.0 2.0

	FrameIndex SKY1 A 0 0
}

Model ExSkyDomeClouds
{
	Path "models/sky/"
	Model 0 "skydome.md3"
	Skin 0 "clouds_layer1.png"
	Scale 1.8 1.8 1.8

	FrameIndex SKY1 A 0 0
}

Model ExSkyDomeCloudsBG 
{
	Path "models/sky/"
	Model 0 "skydome.md3"
	Skin 0 "clouds_layer2.png"
	Scale 1.9 1.9 1.9

	FrameIndex SKY1 A 0 0
}

Model ExBgTerrain1 
{
	Path "models/sky/"
	Model 0 "bg_terrain1.md3"
	Skin 0 "bg_terrain1.png"
	Scale 0.4 0.4 0.4

	FrameIndex SKY1 A 0 0
}

//SPLATS
Model ExBloodDropModel1 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat1.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExBloodDropModel2 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat2.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExBloodDropModel3 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat3.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExBloodDropModel4 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat4.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExBloodDropModel5 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat5.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

//green splats
Model ExGreenBloodDropModel1 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat1.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExGreenBloodDropModel2 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat2.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExGreenBloodDropModel3 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat3.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExGreenBloodDropModel4 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat4.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

Model ExGreenBloodDropModel5 
{
	Path "models/blood/"
	Model 0 "splat.md3"
	Skin 0 "splat5.png"
	Scale 0.75 0.75 0.75

	FrameIndex MODE L 0 0
}

//LEVEL SPECIFIC
Model Ex00LavaMover 
{
	Path "models/map00/"
	Model 0 "m00_lava_mover.md3"
	Skin 0 "m00_lava_mover.png"
	Scale 0.65 0.65 0.7

	FrameIndex MODE L 0 0
}

Model Ex01PushBlock 
{
	Path "models/map01/"
	Model 0 "m01_pushblock.md3"
	Skin 0 "m01_pushblock.png"

	FrameIndex MODE L 0 0
}

//MISC
Model ExArrow
{
  Path "models/arrow/"
	Model 0 "arrow.md3"
	Skin 0 "arrow.png"

	FrameIndex MODE L 0 0
}