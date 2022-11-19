#include<iostream>
using namespace std;
int main()
{
	int n = 12, m = 32, i,t=0;
	while (m != 2 * n)
	{
		m++;n++;t++;
	}
	
	cout << t<< "," << m<< "," << n;
    
}