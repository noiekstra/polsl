#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, j;
	string wyraz;

	cout << "Podaj wyraz, ktory chcesz sprawdzic: ";
	cin >> wyraz;
	
	for (i = 0, j = wyraz.length() - 1; i < j; i++, j--)
	{
		if (wyraz[i] != wyraz[j])
			break;
	}
	if (i < j)
		cout << "Podany wyraz nie jest palindromem" << endl;
	else
		cout << "Podany wyraz jest palindromem" << endl;

	return 0;
}