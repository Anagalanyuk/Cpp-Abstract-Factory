#pragma once

#include<string>

#include"Herbivor.h"
class Cornivor
{
public:
	void Eat(Herbivor* item)
	{
		if (power > item->GetWeidht())
		{
			power += 10;
			item->Damage();
		}
		else
		{
			power -= 10;
		}
	}
	void Show()
	{
		std::cout << name;
		std::cout << " Power:" << power;
	}
protected:
	int power = 50;
	std::string name = "Lion";
};

class Lion :public Cornivor
{
public:
	Lion()
	{
	}
	Lion(std::string name, int power)
	{
		this->name = name;
		this->power = power;
	}
private:
	std::string name;
};