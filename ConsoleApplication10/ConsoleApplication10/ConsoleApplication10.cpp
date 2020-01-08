#include "pch.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	int l_w, l_k;
	int**macierz;
	cout << "podaj liczbe wierszy: ";
	cin >> l_w;
	cout << "podaj liczbe kolumn:";
	cin >> l_k;

	macierz = new int*[l_w];
	for (int i = 0; i < l_w; i++) 
	{
		macierz[i] = new int[l_k];
	}
	for (int i = 0; i < l_w; i++)
	{
		for (int j = 0; j < l_k; j++)
		{
			if(i==j)
			{
				macierz[i][j] = 0;
			}
			else
			{
				if (i > j) 
				{
					macierz[i][j] = -1;
				}
				else
				{
					macierz[i][j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < l_w; i++)
	{
		for (int j = 0; j < l_k; j++)
		{
			cout << setw(4) <<macierz[i][j];
		}
		cout << endl;
	}

}

