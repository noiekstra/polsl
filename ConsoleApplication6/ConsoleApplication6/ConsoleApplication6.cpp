#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int ile_5(int tab[], int n);
int main()
{
	int tab[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i] << " ";
	}
	cout << endl<<ile_5(tab, 10);
	
}
int ile_5(int tab[], int n)
{
	int ile = 0;
	for (int i = 0; i < 10; i++)
		if (tab[i] % 5 == 0 && tab[i] != 0)
			ile++;
	return ile;
}