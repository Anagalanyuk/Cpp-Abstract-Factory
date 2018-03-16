#include<iostream>

#include"Herbivor.h"

#include"Cornivor.h"

#include"Animal World.h"

#include"Abstract Factory.h"

using namespace std;

int main()
{
	//AnimalWorld foo(new FactoryAfrica);
	//foo->Eat();

	Continent* foo = new Africa();
	foo->Show();

	//Herbivor* foo = new Wiledbeest("wildbeest",50);
	//foo->Show();
	//Cornivor* foo1 = new Lion("lion", 80);
	//foo1->Eat(foo);
	//foo->Show();
	//foo1->Show();
	//foo1->Eat(foo);
	//foo->Show();
	//foo->IsAlive();
	int a;
	cin >> a;
}