#include<iostream>
using namespace std;
 int bin(int n)
{
	 int x = 0;
	 for (int i = 1;i <= n;i++)
		 x = x + i * i;
	 if (x > 1000)
		 return (n - 1);
	 else
		 return bin(++n);
}



int main()
{
	cout << bin(1);
}