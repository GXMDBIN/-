#include<iostream>
using namespace std;
int main()
{
	int x, y, z,s,max;
	cout << "������������";
	cin >> x >> y >> z;
	if (x > y)
		s=x;
	else
		s=y;
	if (z > s)
		max = z;
	else
		max = s;
	cout << "���ֵΪ��" << max << endl;
	return 0;
}