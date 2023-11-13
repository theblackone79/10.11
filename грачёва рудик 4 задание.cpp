#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	long long n = 1;
	for (int i = 1; i <= 10; i++)
	{
		long long Sum = 0;

		for (int h = 1; h <= i; h++)
		{
			Sum += h;
		}
		n *= Sum;
	}
	cout << n << endl;
	return 0;
}