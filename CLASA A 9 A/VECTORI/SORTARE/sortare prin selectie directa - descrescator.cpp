#include <iostream>
using namespace std;

int n,a[10005];
int main()
{
   cin>>n;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
   for(int x = 1 ; x <= n - 1 ; x++)
    for(int j = x + 1 ; j <= n ; j++)
        if(a[x] < a[j])
            swap(a[x],a[j]);
    for(int x = 1 ; x <= n ; x++)
        cout<<a[x]<<" ";
}
