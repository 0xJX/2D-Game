#pragma once
#include <string>
class CWeapon
{
private:
	std::string strName;
	int iAttackDamage; //pure attack value
	int iValue; //monetary value
	int iCriticalRate; //rate of crits, in  percentage

public:
	std::string GetName();
	void SetName(std::string str);

	int GetAttackDamage();
	void SetAttackDamage(int i);

	int GetValue();
	void SetValue(int i);

	int GetCriticalRate();
	void SetCriticalRate(int i);

	void init();
};