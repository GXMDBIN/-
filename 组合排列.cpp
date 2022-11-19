#include<iostream>
using namespace std;


int C(int  m, int n)
{
	int i, c = 1;
	i = n;
	while (i != 0)
	{
		c *= m; m--; i--;
	}
	while (n != 0)
	{
		c /= n; n--;
	}
	return c;
}



int main()
{
	int n ,m;
	while (cin >> m>> n) 
	{
		cout << C(m,n) << endl;
	}
	return 0;
}