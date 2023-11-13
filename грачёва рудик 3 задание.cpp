#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double m = 0;
	double y = 0;

	cout << "Какую сумму вы хотите положить?: ";
	cin >> m;

	cout << "на какое кол-во времени: ";
	cin >> y;

	cout << "Ответ будет: " << m * (1 + (y * 0.03));
}