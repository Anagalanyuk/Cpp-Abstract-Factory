#pragma once

#include<iostream>

#include<vector>



class Continent // Abstract factory
{
public:

	virtual Cornivor* CreateCornivor() = 0;
	virtual Herbivor* CreateHerbivor() = 0;
};

class Africa :public Continent // concret product
{
public:
	virtual Cornivor* CreateCornivor()override
	{
		return new Lion;
	}
	virtual Herbivor* CreateHerbivor()override
	{
		return new Wiledbeest;
	}
};

class NorthAmerica :public Continent
{
public:
	virtual Cornivor* CreateCornivor()override
	{
		return new Wolf;
	}
	virtual Herbivor* CreateHerbivor()override
	{
		return new Bisson;
	}
};

class Eurasia :public Continent
{
public:
	virtual Cornivor* CreateCornivor()override 
	{
		return new Tiger;
	}
	virtual Herbivor* CreateHerbivor()override
	{
		return new Elk;
	}
};