#include<iostream>
using namespace std;
int main()
{
	int n, m,x,i,t=0;
	cin >> n;
	cin >>m;
	for (i=1;i<= n;i++)
	{
		bool bin = true;
		if (i % 2 != 0)
		{
			bin = true;
			t++;
		}
			if (bin = false)
				break;
		
		
	}
	cout << t;
	return 0;
}
