#pragma once

#include<vector>

#include"Continent.h"

#include<ctime>

class AnimalWorld  //client
{
public:
	AnimalWorld(Continent* continent, int cornivor, int herbivor)
	{
		m_amountCornivor = cornivor;
		m_amountHerbivor = herbivor;
		for (int i = 0; i < m_amountCornivor; ++i)
		{
			m_cornivor.push_back(continent->CreateCornivor());

		}
		for (int i = 0; i < m_amountHerbivor; ++i)
		{
			m_herbivor.push_back(continent->CreateHerbivor());
		}
	}

	void FeedCornivor()
	{
				srand(time(nullptr));
				std::vector<int> number;
				for (int i = 0; i < m_amountCornivor; ++i)
				{
					number.push_back(rand() % m_amountHerbivor);
				}
				for (int i = 0; i < m_amountCornivor; ++i)
				{
					m_cornivor[i]->Eat(m_herbivor[number[i]]);
				}
	}

	void FeedHerBivor()
	{
		for (int i = 0; i < m_amountHerbivor; ++i)
		{
			m_herbivor[i]->Eat();
		}
	}

	void Show()
	{
		for (int i = 0; i < m_amountCornivor; ++i)
		{
			m_cornivor[i]->Show();
			std::cout << std::endl;
		}

		std::cout << std::endl;

		for(int i = 0; i < m_amountHerbivor; ++i)
		{
			m_herbivor[i]->Show();
			std::cout << " status:";
			m_herbivor[i]->IsAlive();
			std::cout << std::endl;

		}
	}
private:
	int m_amountCornivor = 0;
	int m_amountHerbivor = 0;
	std::vector<Herbivor*> m_herbivor;
	std::vector<Cornivor*> m_cornivor;
};

