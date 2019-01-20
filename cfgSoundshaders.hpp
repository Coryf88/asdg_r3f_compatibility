class CfgSoundShaders
{
	class SyndikatLMG_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closure_02",
				1
			}
		};
		range=5;
		volume=0.63095737;
	};
	class SyndikatLMG_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_03",
				1
			}
		};
		volume=0.63095737;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SyndikatLMG_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class SyndikatLMG_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class SyndikatLMG_TailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class SyndikatLMG_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SyndikatLMG_TailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class SyndikatLMG_TailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class SyndikatLMG_TailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SyndikatLMG_TailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SyndikatLMG_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SyndikatLMG_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SyndikatLMG_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class SyndikatLMG_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class SyndikatLMG_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SyndikatLMG_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Rogue9_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closure_02",
				1
			}
		};
		range=10;
		volume=1;
		rangeCurve="closeShotCurve";
	};
	class Rogue9_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Rogue9_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class Rogue9_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class Rogue9_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class Rogue9_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Rogue9_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class Rogue9_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class Rogue9_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Rogue9_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Rogue9_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class Rogue9_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Rogue9_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class Rogue9_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class Rogue9_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Rogue9_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR01_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closure_02",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class SPAR01_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SPAR01_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class SPAR01_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class SPAR01_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class SPAR01_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR01_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class SPAR01_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class SPAR01_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR01_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR01_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SPAR01_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR01_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class SPAR01_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class SPAR01_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR01_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR02_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closure_02",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class SPAR02_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SPAR02_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class SPAR02_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class SPAR02_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class SPAR02_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR02_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class SPAR02_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class SPAR02_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR02_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SPAR02_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SPAR02_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR02_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class SPAR02_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class SPAR02_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR02_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR_17_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closure",
				1
			}
		};
		volume=0.056234129;
		range=5;
	};
	class SPAR_17_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_03",
				1
			}
		};
		volume=0.79432821;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SPAR_17_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_03",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class SPAR_17_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_03",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class SPAR_17_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_interior",
				1
			}
		};
		volume="interior";
		range=500;
		limitation=0;
	};
	class SPAR_17_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_houses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		limitation=1;
	};
	class SPAR_17_Shot_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_03",
				1
			}
		};
		volume=1;
		range=400;
	};
	class SPAR_17_tailInterior_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_interior",
				1
			}
		};
		volume="interior";
		range=500;
		limitation=0;
	};
	class SPAR_17_tailTrees_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailForest_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailMeadows_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		range=1800;
		limitation=1;
	};
	class SPAR_17_tailHouses_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_houses",
				1
			}
		};
		volume="(1-interior/1.4)*houses";
		range=1200;
		limitation=1;
	};
	class SPAR_17_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SPAR_17_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR_17_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class SPAR_17_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class SPAR_17_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SPAR_17_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
};
