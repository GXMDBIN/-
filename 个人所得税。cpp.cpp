#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	float f{};
	cin >> n;
	if (n >=5000)
		f = (n - 5000) * 0.20 +(5000 - 800) * 0.03;
	if (800 < n && n < 5000)
		f = (n - 800) * 0.03;
	cout << setiosflags(ios::fixed) << setprecision(2) << f << endl;
}