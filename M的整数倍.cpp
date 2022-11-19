#include<iostream>
using namespace std;
int main()
{
	int N, M,i,k=0;

	cin >> N ;

	cin >> M;

	for (i = 1;i <= N;i++)
	{
		if (i%M == 0)k++;

	}

	cout << k;

	return 0;

}