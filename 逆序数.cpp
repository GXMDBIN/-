#include<iostream>
using namespace std;
int main()
{
	int x,a,b,c,sum;
	cin >> x;
	a = 0, b = 0, c = 0, sum = 0;
	a = x % 10 *100;
	b = (x / 10) % 10*10;
	c = x / 100;
	sum = a + b + c;
	cout << sum << endl;
	return 0;
}
