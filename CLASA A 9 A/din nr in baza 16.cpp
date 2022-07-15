#include <iostream>
#include <algorithm>
using namespace std;

int n,k,a[101];
int main()
{
    cin>>n;
    while(n)
    {
        a[++k] = n % 16;
        n /= 16;
    }
    for(int x = k ; x >= 1 ; x--)
    {
        if(a[x] <= 9)
            cout<<a[x];
        else
        {
            if(a[x] == 10)
                cout<<"A";
            if(a[x] == 11)
                cout<<"B";
            if(a[x] == 12)
                cout<<"C";
            if(a[x] == 13)
                cout<<"D";
            if(a[x] == 14)
                cout<<"E";
            if(a[x] == 15)
                cout<<"F";
        }
    }
}
