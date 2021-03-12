#include "pch.h"
#include <iostream>

using namespace std;

void crznach(int x, int mas[100][100])
{
	int cr = 0;
	for (int i = 0; i < x; i++)
	{
		cr += mas[i][i];
	}
	cr = cr / x;
	cout << "Ср. арифмет. диагоналей матрицы = " << cr;
}