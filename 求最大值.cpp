#include<iostream>
using namespace std;
int main()
{
		int x, y, z, max;
		cout << "请输入三个整数";
		cin >> x >> y >> z;
		max = (x > y && x > z) ? x : (y > x && y > z) ? y : z;
		cout <<"最大值为：" << max << endl;
		return 0;
}







