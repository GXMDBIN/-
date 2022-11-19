#include<iostream>
using namespace std;
int main()
{
	int M;
	cin >> M;
	if ( M%7==0||M % 10 ==7)
		cout << "N";
	else 
		cout << M << endl;
}