#include<iostream>
using namespace std;
int main()
{
	float n = 100, i,x=100;
	for (i = 1;i <10;i++)
	{
		n = n / 2;
		x = x + n * 2;
	}
		cout << x << "\n"<<n*0.5;

	
}