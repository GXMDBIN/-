#include<iostream>
using namespace std;
int main()
{
	int x,y,z,a,sum;
	cout << "������һ����λ��";
	cin >> x;
	y = x % 10;
	z = x / 10 % 10;
	a = x / 100;
	sum = y + z + a;
	cout<<"����λ��������λ֮��Ϊ��" << sum << endl;
	return 0;
}