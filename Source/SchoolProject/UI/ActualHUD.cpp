
#include "UI/ActualHUD.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"





void UPlayerHud::NativeConstruct()
{
	Super::NativeConstruct();
	HealthBar->SetPercent(1);
	HealthText->SetText(FText::FromString("100/100"));
}

void UPlayerHud::SetHealthBar(float CurrentHealth, float MaxHealth)
{
	constexpr FLinearColor RedColor = FLinearColor(1.0f, 0.0f, 0.0f);
	constexpr FLinearColor OrangeColor = FLinearColor(1.0f, 0.15f, 0.0f);
	constexpr FLinearColor BlueColor = FLinearColor(0.0f, 0.5f, 1.0f);

	if (CurrentHealth <= 30)
	{
		HealthBar->SetFillColorAndOpacity(RedColor);

	}
	else if (CurrentHealth > 30 && CurrentHealth <= 70)
	{
		HealthBar->SetFillColorAndOpacity(OrangeColor);
	}
	else if (CurrentHealth > 70)
	{
		HealthBar->SetFillColorAndOpacity(BlueColor);
	}
	HealthBar->SetPercent(CurrentHealth / MaxHealth);

	FString currentHealthString = FString::FromInt(CurrentHealth);
	FString maxHealthString = FString::FromInt(MaxHealth);
	HealthText->SetText(FText::FromString(currentHealthString + "/" + maxHealthString));
}