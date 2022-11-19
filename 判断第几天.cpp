#include<iostream>
using namespace std;
int main()
{
	int month, day, x = 0, sum;
	cin >> month >> day;
	switch (month)
	{
	case 1: x = 0;break;
	case 2: x = 31;break;
	case 3: x = 59;break;
	case 4:x = 90;break;
	case 5:x = 120;break;
	case 6:x = 151;break;
	case 7:x = 181;break;
	case 8:x = 212;break;
	case 9:x = 243;break;
	case 10:x = 273;break;
	case 11:x = 304;break;
	case 12:x = 334;break;
	}
	sum = x + day;
		cout << sum << endl;
}