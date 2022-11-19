#include<iostream>
using namespace std;
int main()
{
	int x,y,z,a,sum;
	cout << "请输入一个三位数";
	cin >> x;
	y = x % 10;
	z = x / 10 % 10;
	a = x / 100;
	sum = y + z + a;
	cout<<"该三位数各个数位之和为：" << sum << endl;
	return 0;
}