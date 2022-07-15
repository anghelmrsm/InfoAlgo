#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;

#define mod  666013

unsigned long long int a[1001],n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    a[0] = a[1] = 1;
    for(int x = 2 ; x <= n ; x++)
        for(int j = 0 ; j < x ; j++)
            a[x] = ((a[x] % mod) + ((a[j] % mod) * (a[x-j-1]) % mod)) % mod;
    cout<<a[n] % mod;
}
