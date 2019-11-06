#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tekst;
	int dl, ile = 0;

	cout << "\n\tWczytaj linijke tekstu: ";
	getline(cin, tekst);

	dl = tekst.size();
	for (int i = 0; i < dl; i++)
	{
		if (tekst[i] >= 'A'&&tekst[i] <= 'Z')
			ile++;
	}
	cout << ile << endl;
	return 0;
}