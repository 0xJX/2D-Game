#include "Armor.h"

std::string CArmor::GetName()
{
	return std::string();
}

void CArmor::SetName(std::string str)
{
	this->strName = str;
}

int CArmor::GetDefenceValue()
{
	return this->iDefenceValue;
}

void CArmor::SetDefenceValue(int i)
{
	this->iDefenceValue = i;
}

int CArmor::GetValue()
{
	return this->iValue;
}

void CArmor::SetValue(int i)
{
	this->iValue = i;
}

int CArmor::GetDodgeRate()
{
	return this->iDodgeRate;
}

void CArmor::SetDodgeRate(int i)
{
	this->iDodgeRate = i;
}
