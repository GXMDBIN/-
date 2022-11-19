#include<iostream>
using namespace std;

int sum(int a,int n)
{
	int sum = 0, i, j = n,b=0;

	for (i = 1;i <=j;i++)
	{
		b = b + a;
		
		sum = sum + b;
	
		a = a * 10;



	}
    
	return sum;
}

int main()
{
	int a, n,y;

	cin >> a >> n;
	
	y = sum(a, n);

	cout << y;

	return 0;

}