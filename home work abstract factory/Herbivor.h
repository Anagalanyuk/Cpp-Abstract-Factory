#pragma once

#include<string>

class Herbivor //Abstract product
{
public:
	void Eat()
	{
		Weidht += 10;
	 }
	void IsAlive()
	{
		if (Weidht > damage)
		{
			std::cout << "is live" << std::endl;
		}
		else
		{
			std::cout << "is dead" << std::endl;
		}
	 }
	void Show()
	{
		std::cout << name << " widht:" << Weidht;
	}
	int GetWeidht()
	{
		return Weidht;
	}
	int Damage()
	{
		return Weidht -= 10;
	}
protected:
	int Weidht = 50;
	int damage = (Weidht / 10) * 7;
	std::string name = "Wildbeest";
};

class Wiledbeest :public Herbivor//concret product
{
public:
	Wiledbeest()
	{
	}
	Wiledbeest(std::string name, int weidht)
	{
		this->name = name;
		this->Weidht = weidht;
	}
private:
	std::string name;
};

class Bisson :public Herbivor
{

};