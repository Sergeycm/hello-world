#include "pch.h"
#include <iostream>
#include <random>

using namespace std;

void zamena(int x, int mas[100][100])
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if ((i == 0) || (i == x - 1) || (j == 0) || (j == x - 1))
			{
				mas[i][j] = rand() % (100);
			}
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
}