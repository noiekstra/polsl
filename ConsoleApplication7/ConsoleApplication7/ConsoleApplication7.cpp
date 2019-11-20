#include "pch.h"
#include<iostream>
#include<cstdlib>

using namespace std;

int fib(int n);
int main()
{
	int n;
	cout << "\n\tPodaj nr wyrazu ciagu: ";
	cin >> n;
	cout <<"\n\t"<< n << " wyraz ciagu ma wartosc " << fib(n) << endl;

	system("pause");
	return 0;
}

int fib(int n)
{
	if (n < 3)
		return 1;
	return fib(n - 2) + fib(n - 1);
}