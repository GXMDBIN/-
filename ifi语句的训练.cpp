#include<iostream>
using namespace std;
int main()
{
	int x, y, z,s,max;
	cout << "请输入三个数";
	cin >> x >> y >> z;
	if (x > y)
		s=x;
	else
		s=y;
	if (z > s)
		max = z;
	else
		max = s;
	cout << "最大值为：" << max << endl;
	return 0;
}