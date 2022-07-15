#include <iostream>
#include <algorithm>
using namespace std;

int n,f[10005],maxim,k;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        f[k]++;
        if(k > maxim)
            maxim = k;
    }
    for(int x = maxim ; x >= 0 ; x--)
    if(f[x] != 0)
    {
        for(int j = 1 ; j <= f[x] ; j++)
            cout<<x<<" ";
    }
}


