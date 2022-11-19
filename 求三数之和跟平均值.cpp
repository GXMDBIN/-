#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,z,s;
    double c;
    cin >> x>> y>>z;
    s = x + y + z;
    c = (x + y + z) / 3.00;
    cout << s << endl;
    cout <<setiosflags(ios::fixed) << setprecision(2) << c << endl;
    return 0;
}