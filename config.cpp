class CfgPatches {
	class asdg_jointrails_r3f {
		units[]={};
		weapons[]={};
		requiredVersion=1.04;
		requiredAddons[]= {
			"A3_Weapons_F",
			"cba_main",
			"r3f_armes_c",
			"r3f_acc"
		};
		name="R3F weapons pack compatibility patch";
		author="withered_maple";
	};
};

class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short_MG;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;

class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
		R3F_POINTEUR_SURB = 1;
		R3F_POINTEUR_SURB_DES = 1;
		R3F_LAMPE_SURB = 1;
		R3F_LAMPE_SURB_DES = 1;
    };
};

class asdg_UnderSlot: asdg_SlotInfo {
    class compatibleItems {
		R3F_BIPIED_HK417 = 1;
		R3F_BIPIED_HK417_DES = 1;
    };
};

class asdg_OpticRail1913: asdg_OpticRail {
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

class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
		R3F_SILENCIEUX_HK416 = 1;
		R3F_SILENCIEUX_HK416_DES = 1;
    };
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
		R3F_SILENCIEUX_HK417 = 1;
		R3F_SILENCIEUX_HK417_DES = 1;
    };
};

class CfgWeapons {
	class ItemCore;
	class R3F_LAMPE_SURB: ItemCore {
		MRT_SwitchItemNextClass="R3F_POINTEUR_SURB";
		MRT_SwitchItemPrevClass="R3F_POINTEUR_SURB";
		MRT_SwitchItemHintText="Flashlight";
	};

	class R3F_POINTEUR_SURB: ItemCore {
		MRT_SwitchItemNextClass="R3F_LAMPE_SURB";
		MRT_SwitchItemPrevClass="R3F_LAMPE_SURB";
		MRT_SwitchItemHintText="IR Laser";
	};

	class R3F_LAMPE_SURB_DES: R3F_LAMPE_SURB {
		MRT_SwitchItemNextClass="R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemPrevClass="R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemHintText="Flashlight";
	};

	class R3F_POINTEUR_SURB_DES: R3F_POINTEUR_SURB {
		MRT_SwitchItemNextClass="R3F_LAMPE_SURB_DES";
		MRT_SwitchItemPrevClass="R3F_LAMPE_SURB_DES";
		MRT_SwitchItemHintText="IR Laser";
	};

	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};

	class R3F_Famas_F1: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_556 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
		};
	};

	class R3F_FRF2: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_762 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913_long {};
		};
	};

	class R3F_PGM_Hecate_II: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_OpticRail_r3f: asdg_OpticRail1913_long {};
		};
	};

	class R3F_M107: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_OpticRail_r3f: asdg_OpticRail1913_long {};
		};
	};

	class R3F_TAC50: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_OpticRail_r3f: asdg_OpticRail1913_long {};
		};
	};

	class R3F_Minimi: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_556 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913_short_MG {};
		};
	};

	class R3F_Minimi_HG: R3F_Minimi {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
		};
	};

	class R3F_Minimi_762: R3F_Minimi {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f {};
		};
	};

	class R3F_Minimi_762_HG: R3F_Minimi_762 {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
		};
	};

	class R3F_HK417M: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_762 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
			class asdg_UnderSlot_r3f: asdg_UnderSlot {};
		};
	};

	class R3F_HK416M: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_556 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
			class asdg_UnderSlot_r3f: asdg_UnderSlot {};
		};
	};

	class R3F_HK416M_M203: R3F_HK416M {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_UnderSlot_r3f {};
		};
	};

	class R3F_SIG551: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_556 {};
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
			class asdg_UnderSlot_r3f: asdg_UnderSlot {};
		};
	};

	class R3F_MP5SD: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
		};
	};

	class R3F_MP5A5: R3F_MP5SD {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_9MM_SMG {};
		};
	};

	class R3F_M4S90: Rifle_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_OpticRail_r3f: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
		};
	};

	class WeaponHolder;
	class Pistol_Base_F: WeaponHolder {
		class WeaponSlotsInfo;
	};

	class R3F_PAMAS: Pistol_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_9MM {};
		};
	};

	class R3F_HKUSP: Pistol_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class asdg_MuzzleSlot_r3f: asdg_MuzzleSlot_9MM {};
			class asdg_FrontSideRail_r3f: asdg_FrontSideRail {};
		};
	};
};
