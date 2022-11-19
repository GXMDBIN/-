#include<iostream>
using namespace std;

int bin(int a, int n)
{
	int b,k=0;
	b = a;
	for (n;n>0;n--)
	{
		k = k + a;
		a = a * 10 + b;
	}
	return k;
}
int main()
{
	int a, n, s;
	cin >> a >> n;
	s = bin(a, n);
	cout << s;
}
