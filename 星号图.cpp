#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int N, M,i,j;
	cin >> N;
	cin >> M;
	for (i = 1;i <= N;i++)
	{
		for (j = 1;j <= M;j++)
		{
			cout << "*" ;
		}

		cout << endl;
	}
	return 0;

}