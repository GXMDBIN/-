#include<iostream>
using namespace std;
int main()
{
		int x, y, z, max;
		cout << "��������������";
		cin >> x >> y >> z;
		max = (x > y && x > z) ? x : (y > x && y > z) ? y : z;
		cout <<"���ֵΪ��" << max << endl;
		return 0;
}







