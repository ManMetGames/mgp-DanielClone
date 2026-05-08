#pragma once


#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHud.generated.h"



class UTextBlock;

class UProgressBar;



UCLASS()

class SCHOOLPROJECT_API UPlayerHud : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (Bindwidget))
	TObjectPtr<UTextBlock> HealthText;

	UPROPERTY(EditAnywhere, meta = (Bindwidget))
	TObjectPtr<UProgressBar> HealthBar;

public:
	UFUNCTION()
	virtiual void NativeConstruct() override;

	UFUNCTION()
	void SetHealthBar(float CurrentHealth, float MaxHealth);
};