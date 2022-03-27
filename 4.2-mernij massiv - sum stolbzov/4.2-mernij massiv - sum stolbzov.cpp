//4.Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.

#include <iostream>
#include <iostream>
#include <Windows.h>
#include<time.h>
using namespace std;
const int Youchu = 4;
const int Xox = 5;
int Andr[Youchu][Xox];
int sum_x = 0;
int sum = 0;
int sumst = 0;
void ShowLines_sum() {
	for (int y = 0; y < Youchu; y++)
	{

		for (int x = 0; x < Xox; x++)
		{
			Andr[y][x] = rand() % 21;
			cout << Andr[y][x] << " | ";

			sum += Andr[y][x];
		}
		cout << " SUMM lines=" << sum << endl;
		sum = 0;
		cout << endl;
	}
}
void ShowColumns_sum() {
    for (int x = 0; x < Xox; x++)
	{
		for (int y = 0; y < Youchu; y++)
		{
			sumst += Andr[y][x];
		}
		cout << "SUMM columns=" << sumst;
		sumst = 0; cout << endl;
	}
}
int main()
{
	srand(time(0));
	ShowLines_sum();
	ShowColumns_sum();
}
