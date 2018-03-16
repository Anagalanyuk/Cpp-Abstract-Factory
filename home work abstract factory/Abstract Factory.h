#pragma once

#include<vector>

#include"Herbivor.h"

class Continent
{public:
	virtual void Show() = 0;
};

class Africa :public Continent
{
public:
	Africa()
	{
		for (int i = 0; i < 10; ++i)
		{
			herdWildbeest.push_back(new Wiledbeest());
		}
		for (int i = 0; i < 5; ++i)
		{
			herdlion.push_back(new Lion());
		}

	};
	virtual void Show()override
	{
		std::cout << "Herbovor               Cornivor" << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			Herbivor* wildbeest = herdWildbeest.back();
			Cornivor* lion = herdlion.back();
			wildbeest->Show(); std::cout << "     ";
			lion->Show();
			std::cout << std::endl;
		}
	}
private:
	std::vector<Herbivor*> herdWildbeest;
	std::vector<Cornivor*> herdlion;
};

