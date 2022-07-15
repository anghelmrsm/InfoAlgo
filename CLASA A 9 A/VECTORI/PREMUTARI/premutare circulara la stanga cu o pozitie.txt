#include <iostream>
using namespace std;

int n,a[10005],k;
int main()
{
   cin>>n;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
   k = a[1];
   for(int x = 2 ; x <= n ; x++)
    a[x-1] = a[x];
   a[n] = k;
   for(int x = 1 ; x <= n ; x++)
    cout<<a[x]<<" ";
}
