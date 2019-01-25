#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
	class asdg_jointrails_r3f {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"r3f_armes_c", "R3F_Armes", "R3F_Acc", "CBA_Main", "Extended_EventHandlers", "A3_Weapons_F_Acc", "A3_Weapons_F", "A3_Anims_F_Config_Sdr"};
		version = "v8";
		name = "R3F Enhanced";
		author = "withered_maple";
	};
};

class CfgSounds {
	class R3FE_Bolt1 {
		name = "hlc_bolt_fn3011";
		Sound[] = {"\asdg_r3f_comp\sounds\FN3011_shift", 1, 1, 15};
		titles[] = {};
	};
	class R3FE_Bolt2 {
		name = "hlc_bolt_AWM";
		Sound[] = {"\asdg_r3f_comp\sounds\AWM_rechamber", 1, 1, 15};
		titles[] = {};
	};
};

class UGL_F;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class UnderbarrelSlot;
class asdg_SlotInfo;

class asdg_FrontSideRail : asdg_SlotInfo {
	linkProxy = "\a3\data_f\proxies\weapon_slots\side";
	displayName = "$STR_A3_PointerSlot0";
	class compatibleItems {
		R3F_LAMPE_SURB = 1;
		R3F_LAMPE_SURB_DES = 1;
		R3F_POINTEUR_SURB = 1;
		R3F_POINTEUR_SURB_DES = 1;
	};
};
class asdg_PistolUnderRail : asdg_SlotInfo {
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems {
		acc_flashlight_pistol = 1;
	};
};
class asdg_UnderSlot : asdg_SlotInfo {
	linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems {
		R3F_BIPIED_HK417 = 1;
		R3F_BIPIED_HK417_DES = 1;
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail {
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
	class compatibleItems {
		R3F_AIMPOINT = 1;
		R3F_AIMPOINT_DES = 1;
		R3F_EOTECH = 1;
		R3F_EOTECH_DES = 1;
		R3F_J4 = 1;
		R3F_J4_DES = 1;
		R3F_J8 = 1;
		R3F_J8_DES = 1;
		R3F_J8_MILDOT = 1;
		R3F_J8_MILDOT_DES = 1;
		R3F_J10 = 1;
		R3F_J10_DES = 1;
		R3F_J10_MILDOT = 1;
		R3F_J10_MILDOT_DES = 1;
		R3F_ZEISS = 1;
		R3F_ZEISS_DES = 1;
		R3F_NF = 1;
		R3F_NF42 = 1;
		R3F_NF_DES = 1;
		R3F_NF42_DES = 1;
		R3F_OB50 = 1;
		R3F_FELIN = 1;
		R3F_FELIN_DES = 1;
		R3F_FELIN_FRF2 = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot {
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems {
		R3F_SILENCIEUX_HK416 = 1;
		R3F_SILENCIEUX_HK416_DES = 1;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems {
		R3F_SILENCIEUX_HK417 = 1;
		R3F_SILENCIEUX_HK417_DES = 1;
	};
};
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot {
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems {
		muzzle_snds_L = 1;
	};
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot {
	class compatibleItems {
		muzzle_snds_L = 1;
	};
};

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		R3FE_BoltAnim = "R3FE_BoltAnim";
	};
	class Actions {
		class NoActions : ManActions {
			R3FE_BoltAnim[] = {"R3FE_BoltAnim", "Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions {
			R3FE_BoltAnim[] = {"R3FE_BoltAnim_Prone", "Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			R3FE_BoltAnim[] = {"R3FE_BoltAnim_Context", "Gesture"};
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			R3FE_BoltAnim[] = {"R3FE_BoltAnim_Context", "Gesture"};
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			R3FE_BoltAnim[] = {"R3FE_BoltAnim_Context", "Gesture"};
		};
	};
};

class CfgGesturesMale {
	class Default;
	class States {
		class R3FE_BoltAnim : Default {
			file = "\asdg_r3f_comp\anims\rechamber_1903a1_standing.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 1, 1};
		};
		class R3FE_BoltAnim_Prone : Default {
			file = "\asdg_r3f_comp\anims\rechamber_1903a1_prone.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.01;
			headBobMode = 2;
			rightHandIKCurve[] = {0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 1, 1};
		};
		class R3FE_BoltAnim_Context : R3FE_BoltAnim {
			mask = "handsWeapon_context";
		};
	};
};

class CfgAmmo {
	class MissileBase;
	class R3F_ERYX_Missile : MissileBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan", 0.630957, 1.5, 300};
	};
	class R3FE_Penetrator;
	class R3FE_AC58_penetrator : R3FE_Penetrator {
		caliber = 26.6667;
	};
	class GrenadeBase;
	class R3F_APAV40_grenade : GrenadeBase {
		simulation = "shotShell";
		model = "\r3f_armes\roquette_APAV40.p3d";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 10;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 500;
		deflecting = 0;
		timeToLive = 4;
		airFriction = -0.0015;
		fuseDistance = 11;
		whistleDist = 5;
	};
	class R3F_AC58_grenade : GrenadeBase {
		simulation = "shotShell";
		model = "\r3f_armes\roquette_AC58.p3d";
		submunitionAmmo = "R3FE_AC58_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 235;
		indirectHit = 11;
		indirectHitRange = 1.1;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 0.64999998;
		caliber = 0.80000001;
		cost = 500;
		deflecting = 0;
		timeToLive = 4;
		airFriction = -0.0015;
		fuseDistance = 11;
		whistleDist = 5;
	};
};

class CfgWeapons {
	class ItemCore;
	class R3F_LAMPE_SURB : ItemCore {
		MRT_SwitchItemNextClass = "R3F_POINTEUR_SURB";
		MRT_SwitchItemPrevClass = "R3F_POINTEUR_SURB";
		MRT_SwitchItemHintText = "SURB: Lampe";
	};
	class R3F_POINTEUR_SURB : ItemCore {
		MRT_SwitchItemNextClass = "R3F_LAMPE_SURB";
		MRT_SwitchItemPrevClass = "R3F_LAMPE_SURB";
		MRT_SwitchItemHintText = "SURB: Pointeur";
	};
	class R3F_LAMPE_SURB_DES : R3F_LAMPE_SURB {
		MRT_SwitchItemNextClass = "R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemPrevClass = "R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemHintText = "SURB: Lampe";
	};
	class R3F_POINTEUR_SURB_DES : R3F_POINTEUR_SURB {
		MRT_SwitchItemNextClass = "R3F_LAMPE_SURB_DES";
		MRT_SwitchItemPrevClass = "R3F_LAMPE_SURB_DES";
		MRT_SwitchItemHintText = "SURB: Pointeur";
	};
	class Rifle;
	class Rifle_Base_F : Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol;
	class Pistol_Base_F : Pistol {
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;
	};
	class R3F_Famas_F1 : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20", 1, 1, 10};
		reloadAction = "GestureReloadMk20";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.059999999;
			recoil = "recoil_single_FAMAS";
			recoilProne = "recoil_single_prone_FAMAS";
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class Burst : Mode_Burst {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			ffcount = 3;
			reloadTime = 0.059999998;
			dispersion = 0.0035000001;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 60;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.059999999;
			ffCount = 30;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0049999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class Lance_Grenades : UGL_F {
			reloadAction = "GestureReloadMk20UGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload", 0.794328, 1, 10};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_M = 1;
				};
			};
		};
	};
	class R3F_Famas_F1_DES : R3F_Famas_F1 {};
	class R3F_Famas_F1_HG : R3F_Famas_F1 {};
	class R3F_Famas_F1_HG_DES : R3F_Famas_F1_HG {};
	class R3F_Famas_F1_M203 : R3F_Famas_F1 {};
	class R3F_Famas_F1_M203_DES : R3F_Famas_F1_M203 {};
	class R3F_Famas_surb : R3F_Famas_F1 {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_M = 1;
				};
			};
		};
	};
	class R3F_Famas_surb_DES : R3F_Famas_surb {};
	class R3F_Famas_surb_HG : R3F_Famas_surb {};
	class R3F_Famas_surb_HG_DES : R3F_Famas_surb_HG {};
	class R3F_Famas_surb_M203 : R3F_Famas_surb {};
	class R3F_Famas_surb_M203_DES : R3F_Famas_surb_M203 {};
	class R3F_Famas_G2 : R3F_Famas_F1 {
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20", 1, 1, 10};
		reloadAction = "GestureReloadMk20";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.054000001;
			recoil = "recoil_single_FAMAS";
			recoilProne = "recoil_single_prone_FAMAS";
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class Burst : Mode_Burst {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			ffcount = 3;
			reloadTime = 0.054000001;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0035000001;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 60;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01", 1.99526, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02", 1.99526, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03", 1.99526, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"TRG20_Shot_SoundSet", "TRG20_Tail_SoundSet", "TRG20_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1.58489, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01", 1, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02", 1, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03", 1, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet", "TRG20_silencerTail_SoundSet", "TRG20_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01", 0.501187, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02", 0.501187, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.054000001;
			ffcount = 30;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0049999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_M = 1;
				};
			};
		};
	};
	class R3F_Famas_G2_DES : R3F_Famas_G2 {};
	class R3F_Famas_G2_HG : R3F_Famas_G2 {};
	class R3F_Famas_G2_HG_DES : R3F_Famas_G2_HG {};
	class R3F_Famas_G2_M203 : R3F_Famas_G2 {};
	class R3F_Famas_G2_M203_DES : R3F_Famas_G2_M203 {};
	class R3F_Famas_felin : R3F_Famas_G2 {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_M = 1;
				};
			};
		};
	};
	class R3F_Famas_felin_DES : R3F_Famas_felin {};
	class R3F_FRF2 : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload", 1, 1, 10};
		reloadAction = "GestureReloadLRR";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"DMR03_Shot_SoundSet", "DMR03_tail_SoundSet", "DMR03_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_01", 1.77828, 1, 1800};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_02", 1.77828, 1, 1800};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_03", 1.77828, 1, 1800};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01", 0.398107, 1, 30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02", 0.398107, 1, 30};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior", 1.99526, 1, 1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"DMR03_silencerShot_SoundSet", "DMR03_silencerTail_SoundSet", "DMR03_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01", 0.707946, 1, 400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02", 0.707946, 1, 400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03", 0.707946, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01", 0.398107, 1, 30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02", 0.398107, 1, 30};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior", 1.99526, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 1.5;
			recoil = "recoil_single_frf2";
			recoilprone = "recoil_single_prone_frf2";
			dispersion = 0.000099999997;
			minRange = 0.2;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.69999999;
			maxRange = 1400;
			maxRangeProbab = 0.5;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
		class EventHandlers {
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents {
			handAction = "R3FE_BoltAnim";
			sound = "R3FE_Bolt1";
			soundLocation = "RightHandMiddle1";
			delay = 0.02;
			onEmpty = 0;
		};
	};
	class R3F_FRF2_DES : R3F_FRF2 {};
	class R3F_PGM_Hecate_II : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload", 1, 1, 10};
		reloadAction = "GestureReloadLRR";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01", 2.51189, 1, 2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02", 2.51189, 1, 2200};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				soundsetshot[] = {"M320_Shot_SoundSet", "M320_Tail_SoundSet", "M320_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01", 1.77828, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01", 1.77828, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior", 1.99526, 1, 2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 1.5;
			recoil = "recoil_single_pgm";
			recoilprone = "recoil_single_prone_pgm";
			dispersion = 0.00018;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.69999999;
			maxRange = 2400;
			maxRangeProbab = 0.5;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
		class EventHandlers {
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents {
			handAction = "R3FE_BoltAnim";
			sound = "R3FE_Bolt1";
			soundLocation = "RightHandMiddle1";
			delay = 0.02;
			onEmpty = 0;
		};
	};
	class R3F_PGM_Hecate_II_DES : R3F_PGM_Hecate_II {};
	class R3F_PGM_Hecate_II_POLY : R3F_PGM_Hecate_II {};
	class R3F_M107 : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload", 0.251189, 1, 10};
		reloadAction = "GestureReloadDMR05";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_01", 7.94328, 1, 2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_02", 7.94328, 1, 2200};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				soundSetShot[] = {"GM6Lynx_Shot_SoundSet", "GM6Lynx_Tail_SoundSet", "GM6Lynx_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01", 0.398107, 1, 40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02", 0.398107, 1, 40};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior", 1.99526, 1, 2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.5;
			recoil = "recoil_single_pgm";
			recoilprone = "recoil_single_prone_pgm";
			dispersion = 0.00030000001;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.69999999;
			maxRange = 1400;
			maxRangeProbab = 0.5;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_M107_DES : R3F_M107 {};
	class R3F_TAC50 : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload", 1, 1, 10};
		reloadAction = "GestureReloadLRR";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01", 2.51189, 1, 2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02", 2.51189, 1, 2200};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				soundsetshot[] = {"M320_Shot_SoundSet", "M320_Tail_SoundSet", "M320_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01", 1.77828, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01", 1.77828, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior", 1.99526, 1, 2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees", 1, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 1.5;
			recoil = "recoil_single_pgm";
			recoilprone = "recoil_single_prone_pgm";
			dispersion = 0.00015000001;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 1400;
			midRangeProbab = 0.69999999;
			maxRange = 2000;
			maxRangeProbab = 0.5;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
		class EventHandlers {
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents {
			handAction = "R3FE_BoltAnim";
			sound = "R3FE_Bolt2";
			soundLocation = "RightHandMiddle1";
			delay = 0.02;
			onEmpty = 0;
		};
	};
	class R3F_Minimi : Rifle_Base_F {
		class GunParticles : GunParticles {
			class AmmoBeltEject {
				effectName = "MachineGunEject2";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload", 1, 1, 10};
		reloadAction = "GestureReloadLIM";
		class manual : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet", "SyndikatLMG_Tail_SoundSet", "SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SyndikatLMG_silencerShot_SoundSet", "SyndikatLMG_silencerTail_SoundSet", "SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.066;
			recoil = "Minimi556";
			recoilProne = "Minimi556Prone";
			dispersion = 0.00079999998;
			minRange = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.57999998;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = "true";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_H_MG = 1;
				};
			};
		};
	};
	class R3F_Minimi_HG : R3F_Minimi {
		class GunParticles : GunParticles {
			class AmmoBeltEject {
				effectName = "MachineGunEject2";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload", 1, 1, 10};
		reloadAction = "GestureReloadLIM";
		class manual : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet", "SyndikatLMG_Tail_SoundSet", "SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SyndikatLMG_silencerShot_SoundSet", "SyndikatLMG_silencerTail_SoundSet", "SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.066;
			recoil = "Minimi556";
			recoilProne = "Minimi556Prone";
			dispersion = 0.00079999998;
			minRange = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.57999998;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = "true";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class asdg_FrontSideRail_r3f : asdg_FrontSideRail {
				R3F_PIRAT = 1;
				R3F_PIRAT_DES = 1;
			};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_Minimi_762 : R3F_Minimi {
		class GunParticles : GunParticles {
			class AmmoBeltEject {
				effectName = "MachineGunEject2";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload", 1, 1, 10};
		reloadAction = "GestureReloadLIM";
		class manual : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_01", 1.77828, 1, 1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_02", 1.77828, 1, 1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_03", 1.77828, 1, 1200};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"Zafir_Shot_SoundSet", "Zafir_Tail_SoundSet", "Zafir_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01", 0.562341, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02", 0.562341, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior", 1.99526, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.075000003;
			recoil = "Minimi762";
			recoilProne = "Minimi762Prone";
			dispersion = 0.0020000001;
			minRange = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.57999998;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = "true";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_Minimi_762_HG : R3F_Minimi_762 {
		class GunParticles : GunParticles {
			class AmmoBeltEject {
				effectName = "MachineGunEject2";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload", 1, 1, 10};
		reloadAction = "GestureReloadLIM";
		class manual : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_01", 1.77828, 1, 1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_02", 1.77828, 1, 1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_03", 1.77828, 1, 1200};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"Zafir_Shot_SoundSet", "Zafir_Tail_SoundSet", "Zafir_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01", 0.562341, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02", 0.562341, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior", 1.99526, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.075000003;
			recoil = "Minimi762";
			recoilProne = "Minimi762Prone";
			dispersion = 0.0020000001;
			minRange = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.57999998;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = "true";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class asdg_FrontSideRail_r3f : asdg_FrontSideRail {
				R3F_PIRAT = 1;
				R3F_PIRAT_DES = 1;
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_HK417M : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload", 1, 1, 10};
		reloadAction = "GestureReloadSPAR_01";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_HK417";
			recoilProne = "recoil_single_prone_HK417";
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 800;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			ffCount = 20;
			recoil = "recoil_auto_HK417";
			recoilProne = "recoil_auto_prone_HK417";
			dispersion = 0.0024999999;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 80;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_762 {
				class compatibleItems : compatibleItems {
					muzzle_snds_B = 1;
				};
			};
			class UnderbarrelSlot : asdg_UnderSlot {
				class compatibleItems : compatibleItems {
					bipod_01_F_snd = 1;
				};
			};
		};
	};
	class R3F_HK417L : R3F_HK417M {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload", 1, 1, 10};
		reloadAction = "GestureReloadSPAR_01";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_HK417";
			recoilProne = "recoil_single_prone_HK417";
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 800;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			ffCount = 20;
			recoil = "recoil_auto_HK417";
			recoilProne = "recoil_auto_prone_HK417";
			dispersion = 0.0024999999;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 80;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_762 {
				class compatibleItems : compatibleItems {
					muzzle_snds_B = 1;
				};
			};
			class UnderbarrelSlot : asdg_UnderSlot {
				class compatibleItems : compatibleItems {
					bipod_01_F_snd = 1;
				};
			};
		};
	};
	class R3F_HK417L_DES : R3F_HK417L {};
	class R3F_HK417M_DES : R3F_HK417M {};
	class R3F_HK417M_HG : R3F_HK417M {};
	class R3F_HK417M_HG_DES : R3F_HK417M_HG {};
	class R3F_HK417S_HG : R3F_HK417M {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_HK417";
			recoilProne = "recoil_single_prone_HK417";
			dispersion = 0.0020000001;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 800;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet", "SPAR_17_Tail_SoundSet", "SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet", "SPAR_17_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			ffCount = 20;
			recoil = "recoil_auto_HK417";
			recoilProne = "recoil_auto_prone_HK417";
			dispersion = 0.0070000002;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 80;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
		};
	};
	class R3F_HK417S_HG_DES : R3F_HK417S_HG {};
	class R3F_HK416M : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload", 1, 1, 10};
		reloadAction = "GestureReloadSPAR_01";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR01_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			recoil = "recoil_single_FAMAS";
			recoilProne = "recoil_single_prone_FAMAS";
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR01_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			ffCount = 30;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0049999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class Lance_Grenades : UGL_F {
			reloadAction = "GestureReloadMk20UGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload", 0.794328, 1, 10};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_M = 1;
				};
			};
			class UnderbarrelSlot : asdg_UnderSlot {
				class compatibleItems : compatibleItems {
					bipod_01_F_snd = 1;
				};
			};
		};
	};
	class R3F_HK416M_DES : R3F_HK416M {};
	class R3F_HK416M_HG : R3F_HK416M {};
	class R3F_HK416M_HG_DES : R3F_HK416M_HG {};
	class R3F_HK416S_HG : R3F_HK416M_HG {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload", 1, 1, 10};
		reloadAction = "GestureReloadSPAR_01";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet", "SPAR02_Tail_SoundSet", "SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR02_silencerShot_SoundSet", "SPAR02_silencerTail_SoundSet", "SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			recoil = "recoil_single_FAMAS";
			recoilProne = "recoil_single_prone_FAMAS";
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet", "SPAR02_Tail_SoundSet", "SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR02_silencerShot_SoundSet", "SPAR02_silencerTail_SoundSet", "SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			ffCount = 30;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0049999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
	};
	class R3F_HK416S_HG_DES : R3F_HK416S_HG {};
	class R3F_HK416M_M203 : R3F_HK416M {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_H_MG = 1;
				};
			};
		};
	};
	class R3F_HK416M_M203_DES : R3F_HK416M_M203 {};
	class R3F_SIG551 : Rifle_Base_F {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet", "SPAR02_Tail_SoundSet", "SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR02_silencerShot_SoundSet", "SPAR02_silencerTail_SoundSet", "SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			recoil = "recoil_single_FAMAS";
			recoilProne = "recoil_single_prone_FAMAS";
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet", "SPAR02_Tail_SoundSet", "SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"SPAR02_silencerShot_SoundSet", "SPAR02_silencerTail_SoundSet", "SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.07062;
			ffCount = 30;
			recoil = "recoil_auto_FAMAS";
			recoilProne = "recoil_auto_prone_FAMAS";
			dispersion = 0.0049999999;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_556 {
				class compatibleItems : compatibleItems {
					muzzle_snds_H_MG = 1;
				};
			};
			class UnderbarrelSlot : asdg_UnderSlot {
				class compatibleItems : compatibleItems {
					bipod_01_F_snd = 1;
				};
			};
		};
	};
	class R3F_SIG551_CE : R3F_SIG551 {};
	class R3F_MP5SD : Rifle_Base_F {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload", 1, 1, 10};
		reloadAction = "GestureReloadSMG_05";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_silencerShot_SoundSet", "Rogue9_silencerTail_SoundSet", "Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075000003;
			recoil = "recoil_single_MP5";
			recoilProne = "recoil_single_prone_MP5";
			dispersion = 0.0040000002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_silencerShot_SoundSet", "Rogue9_silencerTail_SoundSet", "Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075000003;
			ffCount = 30;
			recoil = "recoil_auto_MP5";
			recoilProne = "recoil_auto_prone_MP5";
			dispersion = 0.0070000002;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 60;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_MP5A5 : R3F_MP5SD {
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload", 1, 1, 10};
		reloadAction = "GestureReloadSMG_05";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_Shot_SoundSet", "Rogue9_Tail_SoundSet", "Rogue9_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_silencerShot_SoundSet", "Rogue9_silencerTail_SoundSet", "Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075000003;
			recoil = "recoil_single_MP5";
			recoilProne = "recoil_single_prone_MP5";
			dispersion = 0.0040000002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_Shot_SoundSet", "Rogue9_Tail_SoundSet", "Rogue9_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {"Rogue9_silencerShot_SoundSet", "Rogue9_silencerTail_SoundSet", "Rogue9_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075000003;
			ffCount = 30;
			recoil = "recoil_auto_MP5";
			recoilProne = "recoil_auto_prone_MP5";
			dispersion = 0.0070000002;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 60;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_9MM_SMG {
				class compatibleItems : compatibleItems {
					muzzle_snds_L = 1;
				};
			};
		};
	};
	class R3F_M4S90 : Rifle_Base_F {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"DMR02_Shot_SoundSet", "DMR02_tail_SoundSet", "DMR02_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01", 5.01187, 1, 2200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02", 5.01187, 1, 2200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03", 5.01187, 1, 2200};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin2", 0.34};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01", 1, 1, 30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02", 1, 1, 30};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_interior", 2.23872, 1, 2200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_trees", 2.23872, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_forest", 2.23872, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_meadows", 2.23872, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_houses", 2.23872, 1, 2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.2;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00089999998;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.029999999;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class asdg_FrontSideRail_r3F : asdg_FrontSideRail {
				class compatibleItems : compatibleItems {
					R3F_PIRAT = 1;
					R3F_PIRAT_DES = 1;
				};
			};
			class asdg_OpticRail_r3f : asdg_OpticRail1913 {
				class compatibleItems : compatibleItems {
					optic_Yorris = 1;
				};
			};
		};
	};
	class R3F_PAMAS : Pistol_Base_F {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01", 3.98107, 1, 1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02", 3.98107, 1, 1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03", 3.98107, 1, 1200};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin1", 0.34};
				soundSetShot[] = {"P07_Shot_SoundSet", "P07_Tail_SoundSet", "P07_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01", 0.223872, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02", 0.223872, 1.2, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior", 1, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01", 0.562341, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02", 0.562341, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03", 0.562341, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin1", 0.34};
				SoundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01", 0.223872, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02", 0.223872, 1.2, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadtime = 0.13;
			dispersion = 0.025;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_9MM {
				class compatibleItems : compatibleItems {
					muzzle_snds_L = 1;
				};
			};
		};
	};
	class R3F_HKUSP : Pistol_Base_F {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01", 3.16228, 1, 1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02", 3.16228, 1, 1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03", 3.16228, 1, 1200};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				soundSetShot[] = {"Rook40_Shot_SoundSet", "Rook40_Tail_SoundSet", "Rook40_InteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01", 0.158489, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02", 0.158489, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior", 1.41254, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01", 0.562341, 1, 400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02", 0.562341, 1, 400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03", 0.562341, 1, 400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin2", 0.34};
				SoundSetShot[] = {"Rook40_silencerShot_SoundSet", "Rook40_silencerTail_SoundSet", "Rook40_silencerInteriorTail_SoundSet"};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01", 0.158489, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02", 0.158489, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				class SoundTails {
					class TailInterior {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadtime = 0.11;
			dispersion = 0.02;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f : asdg_MuzzleSlot_9MM {
				class compatibleItems : compatibleItems {
					muzzle_snds_L = 1;
				};
			};
		};
	};
	class R3F_HKUSP_CE : R3F_HKUSP {};
	class R3F_ERYX : Launcher_Base_F {
		class BaseSoundModeType {};
		class StandardSound : BaseSoundModeType {
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan", 3.1622777, 1, 2000};
			soundBegin[] = {"begin1", 1};
			soundSetShot[] = {"Launcher_Vorona_Shot_SoundSet", "Launcher_Vorona_Tail_SoundSet"};
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan", 1, 1, 20};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan", 0.630957, 1.5, 300};
	};
};
