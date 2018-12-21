#include<iostream>

#include"Herbivor.h"

#include"Cornivor.h"

#include"Animal World.h"

using namespace std;

int main()
{

	AnimalWorld foo(new Eurasia, 5, 8);
	foo.Show();
	foo.FeedCornivor();
	foo.Show();
	foo.FeedCornivor();
	foo.Show();
	foo.FeedCornivor();
	foo.Show();
	foo.FeedCornivor();
	foo.Show();

	system("pause");
	
}