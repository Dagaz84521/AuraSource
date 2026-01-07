//  Copyright Dagaz84521


#include "Aura/Public/AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& Tag, bool bLogNotFound) const
{
	for (const FAuraAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag == Tag)
		{
			return Info;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for Tag [%s] on AttributeInfo [%s]"), *Tag.ToString(), *GetNameSafe(this));
	}
	return FAuraAttributeInfo();
}
