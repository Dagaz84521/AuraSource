//  Copyright Dagaz84521


#include "Input/AuraInputConfig.h"
#include "InputAction.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionByTag(const FGameplayTag& ActionTag,
	bool bLogNotFound) const
{
	for (auto & AbilityInputAction : AbilityInputActions)
	{
		if (AbilityInputAction.ActionTag == ActionTag)
		{
			return AbilityInputAction.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find InputAction for Tag [%s] on InputConfig [%s]"), *ActionTag.ToString(), *GetNameSafe(this));
	}
	return nullptr;
}
