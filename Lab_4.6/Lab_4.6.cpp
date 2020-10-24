// Lab_4.6.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 0.6 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, i;
	double P, S, l, a;

	P = 1;
	k = 1;
	while (k <= 15)
	{
		i = 1;
		S = 0;
		while (i <= k)
		{
			a = cos(i + k);
			S += a;
			i++;
		}
		P *= pow(1 + S, 2);
		k++;
	}
	cout << "P = " << P << endl;

	P = 1;
	k = 1;
	do
	{
		i = 1;
		S = 0;
		do
		{
			a = cos(i + k);
			S += a;
			i++;
		} while (i <= k);
		P *= pow(1 + S, 2);
		k++;
	} while (k <= 15);
	cout << "P = " << P << endl;

	P = 1;
	for (k = 1; k <= 15; k++)
	{
		S = 0;
		for (i = 1;i <= k;i++)
		{
			a = cos(i + k);
			S += a;
		}
		P *= pow(1 + S, 2);
	}
	cout << "P = " << P << endl;

	P = 1;
	for (k = 15; k >= 1; k--)
	{
		S = 0;
		for (i = k; i >= 1; i--)
		{
			a = cos(i + k);
			S += a;
		}

		P *= pow(1 + S, 2);
	}
	cout << "P = " << P << endl;

	cin.get();
	return 0;
}
