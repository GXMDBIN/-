#include <iostream>
using namespace std;

int bin(int x);

int main() {
    
    int  n,i;
    cin >> n;
    if (bin(n)==n)
    {
        cout << "yes\n";
        for (i = 1;i<n;i++)
        {
            if (n % i == 0)cout << i << " "  ;
        }
    }
    if (bin(n)!=n||n == 1)cout << "no";
    return 0;
}

int bin(int x) {
   
   
    int sum = 0, i;
    
    for (i = 1; i < x; i++) {
       
        if (x % i == 0) {
            
            sum += i;

        }
    }
    
    return sum;
}