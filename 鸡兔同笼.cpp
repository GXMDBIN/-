#include<iostream>
using namespace std;
int main()
{
	int x, y, a, b;
	cout << "�������ܸ���\n";
	cin >> a;
	cout << "�������ܽ���\n";
	cin >> b;
	x = (4 * a - b) / 2;
	y = (b - 2 * a) / 2;
	cout << "���ĸ���Ϊ:" << x << "\n"
		<< "���ӵĸ���Ϊ:" << y << endl;
	return 0;

}