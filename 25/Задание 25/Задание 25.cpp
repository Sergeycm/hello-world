﻿#include "pch.h"
#include "Fun1.h"
#include "Fun2.h"
#include "Fun3.h"
#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, vibor;
	int mas[100][100];
	cout << "Ведите размер матрицы: ";
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			mas[i][j] = rand() % (100);
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "1 - Транспорирует матрицу\n2 - Ср.арифметическое диагоналей матрицы\n3 - Заменяет числа, которые находятся на границе матрицы их квадратами\nВаш выбор: ";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		transpartir(x, mas);
		break;
	case 2:
		crznach(x, mas);
		break;
	case 3:
		zamena(x, mas);
		break;
	default:
		cout << "Неверно введено!";
		break;
	}
}
