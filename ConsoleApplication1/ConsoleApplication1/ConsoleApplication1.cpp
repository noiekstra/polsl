#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 10;

int main()
{
	int tab[n], min, max;
	double srednia = 0;
	cout << "\n\tPodaj zakres: ";
	cin >> min >> max;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % (max - min + 1) + min;
		cout << "\n\t " << tab[i];
		srednia += tab[i];
	}
	srednia = srednia / 10;
	cout << "\n\n\tSrednia liczb jest rowna: " << srednia << endl;
	int minimalny = tab[0];
	int numer_min = 0;
	for (int i = 1; i < n; i++)
	{
		if (tab[i] < minimalny)
		{
			minimalny = tab[i];
			numer_min = i;
		}
	}
	cout << "\n\t Minimum " << minimalny << endl;
	cout << "\n\t Jest pod indeksem " << numer_min << endl;

	system("pause");
	return 0;

}
