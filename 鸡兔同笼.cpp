#include<iostream>
using namespace std;
int main()
{
	int x, y, a, b;
	cout << "请输入总个数\n";
	cin >> a;
	cout << "请输入总脚数\n";
	cin >> b;
	x = (4 * a - b) / 2;
	y = (b - 2 * a) / 2;
	cout << "鸡的个数为:" << x << "\n"
		<< "兔子的个数为:" << y << endl;
	return 0;

}