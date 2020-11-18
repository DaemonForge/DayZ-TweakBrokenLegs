modded class PlayerBase extends ManBase 
{

	protected bool 		m_UnderMorphineMdfr = false;

	override void Init()
	{
		super.Init();
		RegisterNetSyncVariableBool("m_UnderMorphineMdfr");
	}

	void SetUnderMorphineMdfr(bool state) {
		m_UnderMorphineMdfr = state;
		SetSynchDirty();
	}

	bool UnderMorphineMdfr() {
		return m_UnderMorphineMdfr;
	}

	override bool CanSprint() {
		if (TweakBLCfg.Morphine_ALLOWSPRINT){
			if (!IsRaised() && m_BrokenLegState != eBrokenLegs.NO_BROKEN_LEGS && UnderMorphineMdfr())
			{
				ItemBase item = GetItemInHands();
				if ((item && item.IsHeavyBehaviour())){
					return false;
				} else {
					return true;
				}
			}
		}

		return super.CanSprint();

	}
}