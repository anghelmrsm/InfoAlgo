#include <iostream>
using namespace std;

int n,a[10005],ok = 1;
int main()
{
   cin>>n;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
   for(int x = 1 ; x <= n ; x++)
   {
       ok = 0;
       while(ok == 0)
       {
           ok = 1;
           for(int i = 1 ; i <= n - 1 ; i++)
            if(a[i] > a[i+1])
           {
               swap(a[i],a[i+1]);
               ok = 0;
           }
       }
   }
   for(int x = 1 ; x <= n ; x++)
    cout<<a[x]<<" ";
}
