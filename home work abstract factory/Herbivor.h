#pragma once

#include<string>

class Herbivor //Abstract product
{
public:
	void Eat()
	{
		Weight += 10;

	}
	void IsAlive()
	{
		if (Weight > damage)
		{
			std::cout << "is live";
		}
		else
		{
			std::cout << "is dead";
		}
	}
	void Show() const
	{
		std::cout << name << " widht:" << Weight;

	}
	int Damage()
	{
		return Weight -= 10;
	}
	int GetWeight()
	{
		return Weight;
	}
	virtual ~Herbivor() = 0 {};
protected:
	std::string name;
	int Weight;
	int damage = (Weight / 10) * 7;
};

class Wiledbeest :public Herbivor//concret product
{
public:
	Wiledbeest()
	{
		name = "Wildbeest";
		Weight = 40;
		damage = (Weight / 10) * 7;
	}
/*	virtual void Eat() override
	{
		Weight += 10;
	}
	virtual void IsAlive() override
	{
		if (Weight > damage)
		{
			std::cout << "is live" << std::endl;
		}
		else
		{
			std::cout << "is dead" << std::endl;
		}
	}
	virtual void Show() const override
	{
		std::cout << name << " widht:" << Weight;
	}
	virtual int Damage()override
	{
		return Weight -= 10;
	}
	virtual int GetWeight()override
	{
		return Weight;
	}
private:
	std::string name = "Wildbeest";
	int Weight = 40;
	int damage = (Weight / 10) * 7;*/
};

class Bisson :public Herbivor
{
public:
	Bisson()
	{
		name = "Bisson";
		Weight = 40;
		damage = (Weight / 10) * 7;
	}

/*	virtual void Eat()override
	{
		Weight += 10;
	}

	virtual void IsAlive() override
	{
		if (Weight > damage)
		{
			std::cout << "Is live" << std::endl;
		}
		else
		{
			std::cout << "Is Dead" << std::endl;
		}
	}

	virtual void Show() const override
	{
		std::cout << name << " Weight:" << Weight;
	}

	virtual int Damage()override
	{
		return Weight -= 10;
	}

	virtual int GetWeight()override
	{
		return Weight;
	}
private:
	std::string name = "Bisson";
	int Weight = 40;
	int damage = (Weight / 10) * 7;*/
};

class Elk :public Herbivor
{
public:
	Elk()
	{
		name = "Elk";
		Weight = 80;
		damage = (Weight / 10) * 7;
	}
/*	virtual void Eat()override
	{
		Weight += 10;
	}

	virtual void IsAlive() override
	{
		if (Weight > damage)
		{
			std::cout << "Is live" << std::endl;
		}
		else
		{
			std::cout << "Is Dead" << std::endl;
		}
	}

	virtual void Show() const override
	{
		std::cout << name << " Weight:" << Weight;
	}

	virtual int Damage()override
	{
		return Weight -= 10;
	}

	virtual int GetWeight()override
	{
		return Weight;
	}
private:
	std::string name = "Elk";
	int Weight = 80;
	int damage = (Weight / 10) * 7;*/
};