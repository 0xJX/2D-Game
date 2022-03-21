#include "Weapon.h"

std::string CWeapon::GetName()
{
	return std::string();
}

void CWeapon::SetName(std::string str)
{
	this->strName = str;
}

int CWeapon::GetAttackDamage()
{
	return this->iAttackDamage;
}

void CWeapon::SetAttackDamage(int i)
{
	this->iAttackDamage = i;
}

int CWeapon::GetValue()
{
	return this->iValue;
}

void CWeapon::SetValue(int i)
{
	this->iValue = i;
}

int CWeapon::GetCriticalRate()
{
	return this->iCriticalRate;
}

void CWeapon::SetCriticalRate(int i)
{
	this->iCriticalRate = i;
}


