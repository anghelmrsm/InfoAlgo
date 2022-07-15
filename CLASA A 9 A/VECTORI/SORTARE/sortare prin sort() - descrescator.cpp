#include <iostream>
#include <algorithm>
using namespace std;

int n,a[10005];
int main()
{
   cin>>n;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
   sort(a+1,a+n+1,greater<int>());
   for(int x = 1 ; x <= n ; x++)
    cout<<a[x]<<" ";
}
