#include <iostream>
using namespace std;
int main()

//�������� ��������� �43021 ������� 1
{
	setlocale(LC_ALL, "Russian");
	//��������� ���������� ��������� �������.
	int y1, y2;
	double cymma, x1, x2;
	cin >> x1 >> y1 >> x2 >> y2;
	cymma = (x1 * y1) + (x2 * y2);
	cout << cymma << endl;

	return 0;
}