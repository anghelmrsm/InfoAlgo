#include <iostream>
#include <algorithm>
using namespace std;

int n,a[251][251],m,maxim,sol1;
void sol()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= n ; j++)
            cin>>a[x][j];

    for(int x = 1; x <= n / 2; x++)
    {
        for(int j = x; j <= n - x; ++j)
            cout<<a[x][j]<<" ";
        for(int j = x; j <= n - x; ++j)
            cout<<a[j][n - x + 1]<<" ";
        for(int j = n - x + 1; j >= x + 1; --j)
            cout<<a[n - x + 1][j]<<" ";
        for(int j = n - x + 1; j >= x + 1; --j)
            cout<<a[j][x]<<" ";
    }
    if(n % 2 == 1)
        cout<<a[n / 2 + 1][n / 2 + 1];
}

int main()
{
    sol();
}
