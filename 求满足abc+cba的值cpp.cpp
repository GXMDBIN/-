#include<iostream>
using namespace std;
int main()
{
	int a, b, c, sum = 1333;
	for (a = 0;a <= 9;a++)
	{
		for (b = 0;b <= 9;b++)
		{
			for (c = 0;c <= 9;c++)
			{
				if (100 * a + 10 * b + c + 100 * c + b * 10 + a == sum)
				{
					cout << a << '\n' << b << '\n' << c;
				}
			}
		}
	}
	return 0;
}