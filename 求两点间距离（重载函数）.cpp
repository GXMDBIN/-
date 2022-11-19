#include<iostream>
using namespace std;
#include<cmath>
float bin(int x1, int y1,int x2,int y2)
{
	float x = 0;
	x = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return x;
}

float bin(float a1, float b1,float a2,float b2)
{
	float y = 0;
	y= sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
	return y;
}

int main()
{
	int x1,y1,x2,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	float a1, b1, a2, b2;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cout << "distance:" << bin(x1, y1, x2, y2)<<endl;
	cout << "distance:" << bin(a1, b1, a2, b2);
}