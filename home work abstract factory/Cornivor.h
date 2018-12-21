#pragma once

#include<string>

#include"Herbivor.h"

class Cornivor
{
public:
	Cornivor() {};
	void Eat(Herbivor* item)
	{
		if (Power > item->GetWeight())
		{
			Power += 10;
			item->Damage();
		}
		else
		{
			Power -= 10;
		}
	}
	void Show() const
	{
		std::cout << name << " Power:" << Power;

	}
	virtual ~Cornivor() = 0 {};
protected:
	int Power;
	std::string name;
};

class Lion :public Cornivor
{
public:
	Lion()
	{
		name = "Lion";
		Power = 50;
	}
};

class Wolf :public Cornivor
{
public:
	Wolf()
	{
		name = "Wolf";
		Power = 30;
	}
};

class Tiger :public Cornivor
{
public:
	Tiger()
	{
		name = "Tiger";
		Power = 90;
	}
};