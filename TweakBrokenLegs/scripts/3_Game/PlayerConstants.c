modded class PlayerConstants 
{
	static const float LEG_HEALTH_REGEN						= TweakBLCfg.LEG_HEALTH_REGEN_HEALTHY;		//Leg health regen when leg is NOT BROKEN
	static const float LEG_HEALTH_REGEN_BROKEN				= TweakBLCfg.LEG_HEALTH_REGEN_BROKEN;		//Leg health regen when BROKEN OR SPLINTED
	
		
	//----------------------------------------------------------
	//						BROKEN LEGS SHOCK
	//----------------------------------------------------------
	static const float 	BROKEN_LEGS_INITIAL_SHOCK = TweakBLCfg.BROKEN_LEGS_INITIAL_SHOCK;				//Inflicted shock on modifier start
	static const float 	BROKEN_LEGS_LOW_SHOCK_WALK = TweakBLCfg.BROKEN_LEGS_LOW_SHOCK_WALK;				//Inflicted shock on modifier update with almost healthy legs 
	static const float 	BROKEN_LEGS_MID_SHOCK_WALK = TweakBLCfg.BROKEN_LEGS_MID_SHOCK_WALK;				//Inflicted shock on modifier update with mid health legs
	static const float 	BROKEN_LEGS_HIGH_SHOCK_WALK = TweakBLCfg.BROKEN_LEGS_HIGH_SHOCK_WALK;			//Inflicted shock on modifier update with low health legs
	static const float 	BROKEN_LEGS_SHOCK_SWIM = TweakBLCfg.BROKEN_LEGS_SHOCK_SWIM;					//Inflicted shock on modifier update when swimming
	static const float 	BROKEN_LEGS_LIGHT_MELEE_SHOCK = TweakBLCfg.BROKEN_LEGS_LIGHT_MELEE_SHOCK; 		//Inflicted shock per light weapon swing
	static const float 	BROKEN_LEGS_HEAVY_MELEE_SHOCK = TweakBLCfg.BROKEN_LEGS_HEAVY_MELEE_SHOCK; 		//Inflicted shock per heavy weapon swing
	static const float	BROKEN_LEGS_LOW_HEALTH_THRESHOLD = TweakBLCfg.BROKEN_LEGS_LOW_HEALTH_THRESHOLD;		//Amount of health BELOW which legs have "low health"
	static const float	BROKEN_LEGS_HIGH_HEALTH_THRESHOLD = TweakBLCfg.BROKEN_LEGS_HIGH_HEALTH_THRESHOLD;		//Amount of health OVER which legs have "low health"
	//static const int	BROKEN_LEGS_FALL_STEP_COUNT = 10;			//Number of steps before falling over
	static const float	BROKEN_LEGS_STAND_SHOCK = TweakBLCfg.BROKEN_LEGS_STAND_SHOCK;				//Shock dealt when standing with broken legs
	static const float	BROKEN_LEGS_ROLL_SHOCK = TweakBLCfg.BROKEN_LEGS_ROLL_SHOCK;				//Shock dealt when rolling with broken legs
}