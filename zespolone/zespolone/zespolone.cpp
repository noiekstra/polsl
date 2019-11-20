

#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>
struct Lzespolona
{
	double realis;
	double imaginaris;
	



};

void wypelnij(std::vector<Lzespolona> &tzespolone, int rozmiar)
{
	srand(time(NULL));
	for (int i = 0; i < rozmiar; i++)
	{
		Lzespolona l0;
		l0.realis = rand() % 100;
		l0.imaginaris = rand() % 100;
		tzespolone.push_back(l0);


	}
}
void wczytaj(std::vector<Lzespolona> &tzespolone, int rozmiar)
{
	Lzespolona l0;
	int realis, imaginaris;
	for (int i = 0; i < rozmiar; i++)
	{
		std::cout << "Podaj Realis: ";
		std::cin >> realis;
		std::cout << "Podaj Imaginaris: ";
		std::cin >> imaginaris;
		l0.realis = realis;
		l0.imaginaris = imaginaris;
		tzespolone.push_back(l0);


	}
}
void wydrukuj(std::vector<Lzespolona> &tzespolone, int rozmiar)
{
	char urojona = 'i';
	for (int i = 0; i < rozmiar; i++)
	{
		if(tzespolone[i].imaginaris<0)
			std::cout << tzespolone[i].realis << tzespolone[i].imaginaris << urojona << std::endl;
		
		if (tzespolone[i].imaginaris == 0)
			std::cout<<tzespolone[i].realis << std::endl;
		if(tzespolone[i].imaginaris > 0)
			std::cout << tzespolone[i].realis << "+" << tzespolone[i].imaginaris << urojona << std::endl;
	}



}






int main()
{
	std::vector<Lzespolona> tzespolone;
	int wybor,ile;
	
	//while (std::cin >> wybor)
	//{
		std::cout << "Witaj w menu, co chcesz zrobic: " << std::endl;
		std::cout << "1.Wypelnij i wydrukuj" << std::endl;
		std::cout << "2.Wczytaj i wydrukuj" << std::endl;
		std::cout << "3.Modul" << std::endl;
		std::cout << "4.Argmuent" << std::endl;
		std::cout << "5.Suma" << std::endl;
		std::cout << "6.Iloczyn" << std::endl;
		std::cout << "7.Koniec" << std::endl;
		std::cin >> wybor;
		switch (wybor)
		{
		case 1:
		{
			std::cout << "Podaj ile liczb chcesz do tablicy: ";
			std::cin >> ile;
			wypelnij(tzespolone, ile);
			wydrukuj(tzespolone, ile);
			break;
		}
		case 2:
		{
			std::cout << "Podaj ile liczb chcesz do tablicy: ";
			std::cin >> ile;
			wczytaj(tzespolone, ile);
			wydrukuj(tzespolone, ile);

			break;
		}
		case 3:
		{


			break;
		}
		case 4:
		{



			break;
		}
		case 5:
		{


			break;
		}
		case 6:
		{

			break;

		}
		case 7:
		{
			return 0;

			break;
		}
		
		default :
		{

			std::cout << "Nie ma takiej opcji!" << std::endl;

			break;
		}
		}
	//}
}