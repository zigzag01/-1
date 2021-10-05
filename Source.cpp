#include <iostream>
using namespace std;
int main()

//Белоушко Елизавета П43021 Вариант 1
{
	setlocale(LC_ALL, "Russian");
	//Программа вычисления стоимости покупки.
	int y1, y2;
	double cymma, x1, x2;
	cin >> x1 >> y1 >> x2 >> y2;
	cymma = (x1 * y1) + (x2 * y2);
	cout << cymma << endl;

	return 0;
}