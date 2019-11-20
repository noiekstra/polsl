#include "pch.h"
#include <iostream>

using namespace std;

int max(int tab[], int n);
int main()
{
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i] << " ";
	}
	cout << endl << max(tab, 10);
}
int max(int tab[], int n)
{
	int max = tab[0];
	for (int i = 1; i < n; i++)

		if (tab[i] > max)
			max = tab[i];

	return max;
}
