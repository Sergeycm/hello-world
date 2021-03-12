//#include <pch.h>
#include <iostream>
using namespace std;

int max(int a, int b) { if (a > b) { return a; } else { return b; } }
int min(int a, int b) { if (a < b) { return a; } else { return b; } }

int sum1(int a) { return a * a; }
int sum1(int a, int b) { return a * b; }
int sum1(int a, int b, int c) { int p=(a+b+c)/2;  return sqrt(p*(p-a)*(p-b)*(p-c)); }

int sum2(int a, int b, int c, int d) { return max(max(a, b), max(c, d)); }
int sum2(int a, int b, int c) { return max(max(a, b),c); }
int sum2(int a, int b) { return max(a, b); }

int sum3(int a, int b, int c, int d) {return min( min(a, b), min(c, d)); }
int sum3(int a, int b, int c) { return min(min(a, b),c); }
int sum3(int a, int b) { return min(a, b); }


double sum4(double a, double b, double c, double d) {return(a + b + c + d) / 4;}
double sum4(double a, double b, double c) {return(a + b + c) / 3;}
double sum4(double a, double b) {return(a + b) / 2;}

int main()
{
	setlocale(LC_ALL, "rus");
	int n,kol, a, b, c, d;
	cout << "1. Нахождение площади фигур\n2. Максимум.\n3. Минимум.\n4. Среднее арифмет.\nВыберите: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Найти площадь\n1. Квадрат\n2. Прямугольник\n3.Треугольник\nВыберите: ";
		cin >> kol;
	}
	else if (n <=4 and n>=2)
	{
		cout << "Выберите кол-во чисел(2,3,4): ";
		cin >> kol;
	}
	switch (n)
	{
	case 1:		
		switch (kol)
		{			
		case 1: 
			cout << "a = ";			cin >> a;
			cout << sum1(a) << endl;
			break;
		case 2:	
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b; 
			cout << sum1(a, b) << endl;
			break;
		case 3:	
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b; 
			cout << "c = ";			cin >> c;
			cout << sum1(a, b, c) << endl;
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (kol)
		{
		case 2: 
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << sum2(a, b) << endl;
			break;
		case 3: 
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c; 
			cout << sum2(a, b, c) << endl;
			break;
		case 4:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c;
			cout << "d = ";			cin >> d;
			cout << "Для 4 чисел (a,b,c,d): " << sum2(a, b, c, d) << endl;
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (kol)
		{
		case 2:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b; 
			cout << sum3(a, b) << endl;	break;
		case 3:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c;
			cout << sum3(a, b, c) << endl;
			break;
		case 4:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c;
			cout << "d = ";			cin >> d;
			cout << sum3(a, b, c, d) << endl;
			break;
		default:
			break;
		}
		break;
	case 4:
		switch (kol)
		{
		case 2: 
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b; 
			cout << sum4(a, b) << endl;	break;
		case 3:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c;
			cout << sum4(a, b, c) << endl;
			break;
		case 4:
			cout << "a = ";			cin >> a;
			cout << "b = ";			cin >> b;
			cout << "c = ";			cin >> c;
			cout << "d = ";			cin >> d;
			cout << sum4(a, b, c, d) << endl;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
