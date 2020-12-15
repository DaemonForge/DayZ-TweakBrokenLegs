modded class MorphineMdfr : ModifierBase {
	
	const int LIFETIME = TweakBLCfg.MorphineMdfr_LIFETIME;
	
	override void OnActivate(PlayerBase player)
	{
		super.OnActivate(player);
		PlayerBase plyr = PlayerBase.Cast(player);
		if (plyr){
			plyr.SetUnderMorphineMdfr(true);
		}
		
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		super.OnDeactivate(player);
		PlayerBase plyr = PlayerBase.Cast(player);
		if (plyr){
			plyr.SetUnderMorphineMdfr(false);
		}
	}
	
}