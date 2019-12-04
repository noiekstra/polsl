#include "pch.h"
#include <iostream>
#include<fstream> 
#include <ctime>
#include <algorithm>


using namespace std;

int main()
{
	ofstream plik_wy;
	srand(time(0));
	plik_wy.open("liczby.txt");
	if (plik_wy.is_open())
	{
		for (int i = 0; i < 20; i++)
			plik_wy << rand() % 100<<endl;
			plik_wy.close();
	}

	ifstream plik_we;
	plik_we.open("liczby.txt");
	if (plik_we.is_open())
	{
		int tab[20];
		for (int i = 0; i < 20; i++)
			plik_we >> tab[i];
		plik_we.close();
		sort(tab, tab + 20);
		for (int i = 0; i < 20; i++)
			cout << tab[i] << endl;



		int suma = 0;
		for (int i = 0; i < 20; i++)
		{
			suma = suma + tab[i];
		}
		cout << "suma liczb, to: " << suma << endl;
		system("pause");
	}
}
