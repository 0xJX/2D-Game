#pragma once
#include <string>
class CArmor
{
private:
	std::string strName;
	int iDefenceValue; //pure attack value
	int iValue; //monetary value
	int iDodgeRate; //rate of crits, in  percentage

public:
	std::string GetName();
	void SetName(std::string str);

	int GetDefenceValue();
	void SetDefenceValue(int i);

	int GetValue();
	void SetValue(int i);

	int GetDodgeRate();
	void SetDodgeRate(int i);

	void init();
};