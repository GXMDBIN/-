//输出从3开始小于100的所有双素数。
#include<iostream>
using namespace std;
constexpr auto N =100;

void bin(int a[], int n)
{
	int i, j;
	for (i = 2;i <= n;i++)
	{
		a[i] = i;
	}
	for (i = 2;i <= n;i++)
	{
		for (j = i + 1;j < n;j++)
		{
			if (a[i] != 0 && a[j] != 0 && a[j] % a[i] == 0)
				a[j] = 0;
		}
	}
}

void hyb(int a[], int n)
{
	int i;
	for (i = 3;i < n;i++)
	{
		if (a[i] != 0 && a[i + 2] != 0)
			cout<<" " << i << "/" << i + 2;
	}
}

int main()
{
	
	int a[N + 1];
	bin(a, N);
	hyb(a, N);
	return 0;
}

