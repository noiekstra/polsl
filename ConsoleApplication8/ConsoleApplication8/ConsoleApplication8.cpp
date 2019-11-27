#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;
const int n = 10;

struct Lzespolona
{
	float rzeczywiste;
	float urojona;
};
void drukuj_menu()
{
	cout << "1. Wypelnij" << endl;
	cout << "2. Wczytaj" << endl;
	cout << "3. Wydrukuj" << endl;
	cout << "4. Modul" << endl;
	cout << "5. Argument" << endl;
	cout << "6. Suma" << endl;
	cout << "7. Iloczyn" << endl;
	cout << "8. Koniec" << endl;
	cout << endl;

}
void wypelnij(Lzespolona tzespolone[], int rozmiar)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tzespolone[i].rzeczywiste =( rand() % 10)/2.0;
		
		tzespolone[i].urojona = (rand() % 10)/2.0;

	}
}
void wydrukuj(Lzespolona tzespolone[], int rozmiar)
{
	for (int i = 0; i < n; i++)
		{
			cout << tzespolone[i].rzeczywiste << " + " << tzespolone[i].urojona << "i" << endl;
		}
}
float modul(const Lzespolona liczba)
int main()
{
	Lzespolona zespolone[n];
		char wybor;
	do
	{
		drukuj_menu();
		cin >> wybor;
		switch (wybor)
		{
		case'1':wypelnij(zespolone, n);
			break;
		case'2': ;
			break;
		case'3': wydrukuj(zespolone, n);
			break;
		case'4':
			break;
		case'5':
			break;
		case'6':
			break;
		case'7':
			break;
		}
	} while (wybor != '8');
}

{
	return sqrt(liczba.rzeczywiste*liczba.rzeczywiste+liczba.urojona)

}