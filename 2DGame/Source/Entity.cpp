#include "Entity.h"
std::string CEntity::GetName()
{
	return this->strName;
}

void CEntity::SetName(std::string str)
{
	this->strName = str;
}

int CEntity::GetHealth()
{
	return this->iHealth;
}
void CEntity::SetHealth(int i)
{
	this->iHealth = i;
}

int CEntity::GetMana()
{
	return this->iMana;
}

void CEntity::SetMana(int i)
{
	this->iMana = i;
}

int CEntity::GetMoneyHeld()
{
	return this->iMoneyHeld;
}

void CEntity::SetMoneyHeld(int i)
{
	this->iMoneyHeld = i;
}

int CEntity::GetCurrentWeapon()
{
	return this->iCurrentWeaponIndex;
}

void CEntity::SetCurrentWeapon(int i)
{
	this->iCurrentWeaponIndex = i;
}

int CEntity::GetCurrentArmor()
{
	return this->iCurrentArmorIndex;
}

void CEntity::SetCurrentArmor(int i)
{
	this->iCurrentArmorIndex = i;
}
