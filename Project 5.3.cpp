// Lab_05_3.cpp
// < Кузів Назар >
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>

using namespace std;

double j(const double x);

	int main()
	{
		SetConsoleOutputCP(1251);

		double kp, kk, S;
		int n;

		cout << "kp = "; cin >> kp;
		cout << "kk = "; cin >> kk;
		cout << "n = "; cin >> n;
		cout << fixed;
		cout << "-------------------------------" << endl;1;
		cout << "|    " << "Результати обчислень" << "     |" << endl;
		cout << "-------------------------------" << endl;
		cout << "|" << setw(8) << "k" << "      |"
			<< setw(8) << "S" << "      |" << endl;
		cout << "-------------------------------" << endl;
		double dk = (kk - kp) / n;
		double k = kp;

		while (k <= kk)
		{
			S = j(k) + pow(j(k - 1), 2) + 2 * j(1);
			cout << "|" << setw(8) << setprecision(0) << k << "      |" 
				<< setw(10) << setprecision(5) << S << "    |" << endl;


			k += dk;
		}
	return 0;
	}

double j(const double x)
{
	if (abs(x) >= 1)

		return ((sin(x) + 1) / (pow(cos(x), 2) + exp(x)));

	else
	{
		double A = 1/cos(2*x);
		double R = 0;
		int k = 0;
		double a = 1;
		R = a;
		do
		{
			k++;
			double B = pow(2, 2 * k) * pow(x, 2 * k) / ((2. * k - 1.) * 2. * k);
			a *= B;
			R += a;
		} while (k < 7);
		R *= A;
		return R;
	}
}