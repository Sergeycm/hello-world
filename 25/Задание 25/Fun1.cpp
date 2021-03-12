#include "pch.h"
#include <iostream>

using namespace std;

void transpartir(int x, int mas[100][100])
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << mas[j][i] << "\t";
		}
		cout << endl;
	}
}