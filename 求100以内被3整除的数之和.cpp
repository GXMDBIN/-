#include<iostream>
using namespace std;
int bin(int n)
{
	int sum = 0;
	for (int i = 1;i <=n;i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}

int main()
{
	int n = 100;
	cout<<bin(n);
	
}