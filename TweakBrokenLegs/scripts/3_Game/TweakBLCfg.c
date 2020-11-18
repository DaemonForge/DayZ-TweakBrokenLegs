class TweakBLCfg 
{
	static const float LEG_HEALTH_REGEN_HEALTHY 		= 1; 	//Leg health regen when leg is NOT BROKEN
	static const float LEG_HEALTH_REGEN_BROKEN 			= 0.32; //Leg health regen when BROKEN OR SPLINTED
	static const float BROKEN_LEGS_INITIAL_SHOCK 		= 5; 	//Inflicted shock on modifier start
	static const float BROKEN_LEGS_LOW_SHOCK_WALK 		= 1; 	//Inflicted shock on modifier update with almost healthy legs 
	static const float BROKEN_LEGS_MID_SHOCK_WALK 		= 3; 	//Inflicted shock on modifier update with mid health legs
	static const float BROKEN_LEGS_HIGH_SHOCK_WALK 		= 4;	//Inflicted shock on modifier update with low health legs
	static const float BROKEN_LEGS_SHOCK_SWIM 			= 0.75; //Inflicted shock on modifier update when swimming
	static const float BROKEN_LEGS_LIGHT_MELEE_SHOCK	= 5; 	//Inflicted shock per light weapon swing
	static const float BROKEN_LEGS_HEAVY_MELEE_SHOCK 	= 15; 	//Inflicted shock per heavy weapon swing
	static const float BROKEN_LEGS_LOW_HEALTH_THRESHOLD = 25; 	//Amount of health BELOW which legs have "low health"
	static const float BROKEN_LEGS_HIGH_HEALTH_THRESHOLD = 75; 	//Amount of health OVER which legs have "low health"
	static const float BROKEN_LEGS_STAND_SHOCK 			= 0;	//Shock dealt when standing with broken legs
	static const float FD_DMG_FROM_HEIGHT 				= 3.0;	//!< damage will not be taken into account bellow this HeightToDamage
	static const float FD_MAX_DMG_AT_HEIGHT 			= 15;	//!< height where player gets 100% damage
	static const float FD_MAX_BREAK_LEG_HEIGHT 			= 12;	//!< height where legs break most of the time
	
	static const int MorphineMdfr_LIFETIME  			= 180;	// How Long Morphine Last for
	static const int PainKillersMdfr_LIFETIME 			= 420;	// How Long PainKillers Last for
	
	static bool Morphine_ALLOWSPRINT					= true; // Allow Sprinting if under morphine and have a splint
}