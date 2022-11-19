#include<iostream>
using namespace std;
#include<math.h>
int  bin(double a,int n)
{
	static double sum = 0;
	if (n <= 10)
		return sum=sum+bin(a / 2, n++)*2;

}


int main()
{
	int a=100, n=1;
	bin(a, n);
}