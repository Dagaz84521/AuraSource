//  Copyright Dagaz84521


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParam(const FWidgetControllerParam& Param)
{
	PlayerController = Param.PlayerController;
	PlayerState = Param.PlayerState;
	AbilitySystemComponent = Param.AbilityComponent;
	AttributeSet = Param.AttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{
}

