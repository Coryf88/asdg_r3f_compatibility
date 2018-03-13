class CfgPatches
{
	class asdg_jointrails_r3f
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.04;
		requiredAddons[]=
		{
			"r3f_armes_c",
			"r3f_acc",
			"asdg_jointrails"
		};
		author[]=
		{
			"withered_maple"
		};
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{   
    linkProxy="\a3\data_f\proxies\weapon_slots\side";
	displayName="$STR_A3_PointerSlot0";
	class compatibleItems
	{
		R3F_LAMPE_SURB=1;
		R3F_LAMPE_SURB_DES=1;
		R3F_POINTEUR_SURB=1;
		R3F_POINTEUR_SURB_DES=1;
	};
};

class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{

    linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	class compatibleItems
	{
		R3F_AIMPOINT=1;
		R3F_AIMPOINT_DES=1;
		R3F_EOTECH=1;
		R3F_EOTECH_DES=1;
		R3F_J4=1;
		R3F_J4_DES=1;
		R3F_J8=1;
		R3F_J8_DES=1;
		R3F_J8_MILDOT=1;
		R3F_J8_MILDOT_DES=1;
		R3F_J10=1;
		R3F_J10_DES=1;
		R3F_J10_MILDOT=1;
		R3F_J10_MILDOT_DES=1;
		R3F_ZEISS=1;
		R3F_ZEISS_DES=1;
		R3F_NF=1;
		R3F_NF42=1;
		R3F_NF_DES=1;
		R3F_NF42_DES=1;
		R3F_OB50=1;
		R3F_FELIN=1;
		R3F_FELIN_DES=1;
		R3F_FELIN_FRF2=1;
	};
};
	
class asdg_UnderSlot: asdg_SlotInfo
{
	linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
	class compatibleItems
	{
		bipod_01_F_snd=1;
		bipod_01_F_blk=1;
		bipod_01_F_mtp=1;
		bipod_02_F_blk=1;
		bipod_02_F_tan=1;
		bipod_02_F_hex=1;
		bipod_03_F_blk=1;
		bipod_03_F_oli=1;
		bipod_01_F_khk=1;
		R3F_BIPIED_HK417=1;
		R3F_BIPIED_HK417_DES=1;
	};
};	
	
    class asdg_MuzzleSlot;
    class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		R3F_SILENCIEUX_HK416=1;
		R3F_SILENCIEUX_HK416_DES=1;
		
	};
};

    class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		R3F_SILENCIEUX_HK417=1;
		R3F_SILENCIEUX_HK417_DES=1;
	};
};

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class ItemCore;
	class R3F_LAMPE_SURB: ItemCore
	{
		MRT_SwitchItemNextClass="R3F_POINTEUR_SURB";
		MRT_SwitchItemPrevClass="R3F_POINTEUR_SURB";
		MRT_SwitchItemHintText="SURB: Lampe";
	};
	class R3F_POINTEUR_SURB: ItemCore
	{
		MRT_SwitchItemNextClass="R3F_LAMPE_SURB";
		MRT_SwitchItemPrevClass="R3F_LAMPE_SURB";
		MRT_SwitchItemHintText="SURB: Pointeur";
	};
	class R3F_LAMPE_SURB_DES: R3F_LAMPE_SURB
	{
		MRT_SwitchItemNextClass="R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemPrevClass="R3F_POINTEUR_SURB_DES";
		MRT_SwitchItemHintText="SURB: Lampe";
	};
	class R3F_POINTEUR_SURB_DES: R3F_POINTEUR_SURB
	{
		MRT_SwitchItemNextClass="R3F_LAMPE_SURB_DES";
		MRT_SwitchItemPrevClass="R3F_LAMPE_SURB_DES";
		MRT_SwitchItemHintText="SURB: Pointeur";
	};
	class R3F_Famas_F1: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
				class compatibleItems: compatibleItems
				{
					R3F_PIRAT=1;
					R3F_PIRAT_DES=1;
				};
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_F1_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_F1_HG: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			     R3F_PIRAT=1;
			     R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_F1_HG_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
		            R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_F1_M203: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_F1_M203_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb_HG: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb_HG_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb_M203: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_surb_M203_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2: R3F_Famas_F1
	{ 
	class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2_HG: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2_HG_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2_M203: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_G2_M203_DES: R3F_Famas_F1
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
			    R3F_PIRAT=1;
			    R3F_PIRAT_DES=1;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_felin: R3F_Famas_G2
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Famas_felin_DES: R3F_Famas_G2
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F
			{
				delete compatibleItems;
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_FRF2: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_FRF2_DES: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	}
	class R3F_PGM_Hecate_II: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_PGM_Hecate_II_DES: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_PGM_Hecate_II_POLY: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_M107: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_M107_DES: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_TAC50: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_Minimi: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Minimi_HG: R3F_Minimi
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_Minimi_762: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_Minimi_762_HG: R3F_Minimi_762
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417M: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417L: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417M_DES: R3F_HK417M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417M_HG: R3F_HK417M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417M_HG_DES: R3F_HK417M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417S_HG: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK417S_HG_DES: R3F_HK417S_HG
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_762_r3f: asdg_MuzzleSlot_762
			{
			};
		};
	};
	class R3F_HK416M: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_HK416M_DES: R3F_HK416M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_HK416M_HG: R3F_HK416M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_HK416M_HG_DES: R3F_HK416M
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_HK416M_M203: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_HK416M_M203_DES: R3F_HK416M_M203
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_SIG551: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_SIG551_CE: R3F_SIG551
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
			class asdg_MuzzleSlot_556_r3f: asdg_MuzzleSlot_556
			{
			};
		};
	};
	class R3F_MP5SD: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_MP5A5: R3F_MP5SD
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
	class R3F_M4S90: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_r3F: asdg_FrontSideRail
			{
			};
			class asdg_OpticRail_r3f: asdg_OpticRail1913
			{
				class compatibleItems: compatibleItems
				{
					optic_Yorris=1;
				};
			};
		};
	};
};
