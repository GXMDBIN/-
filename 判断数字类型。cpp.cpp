#include<iostream>
using namespace std;
int main()
{
	char i;
	cin >> i;
	if ('0' <= i && i <= '9')
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
