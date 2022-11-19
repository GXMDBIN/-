#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if ('0' <= ch && ch <= '9')
		cout << "Number" << endl;
	else if ('a' <= ch && ch <= 'z' ||'A' <= ch && ch <= 'Z')
		cout << "Letter" << endl;
	else
		cout << "Other" << endl;
	return 0;
}