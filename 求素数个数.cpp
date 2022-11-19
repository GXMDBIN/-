#include<iostream>
using namespace std;
int main()
{
    int m , n,i,j, t= 0;
    cin >> n >> m;
    for ( i = n; i <= m; i++)
    {
        bool  x = true;
        if (i <= 1)
            x = false;
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = false;
                break;
            }
        }
        if (x == true)
            t++;
    }
    cout << t << endl;
    return 0;
}