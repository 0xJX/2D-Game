#pragma once
#include <string>
class CEntity
{
private:
	std::string strName;
	int iHealth;
	int iMana;
	int iMoneyHeld;
	int iCurrentWeaponIndex;
	int iCurrentArmorIndex;

public:
	std::string GetName();
	void SetName(std::string str);

	int GetHealth();
	void SetHealth(int i);

	int GetMana();
	void SetMana(int i);

	int GetMoneyHeld();
	void SetMoneyHeld(int i);

	int GetCurrentWeapon();
	void SetCurrentWeapon(int i);

	int GetCurrentArmor();
	void SetCurrentArmor(int i);

	void init();
};