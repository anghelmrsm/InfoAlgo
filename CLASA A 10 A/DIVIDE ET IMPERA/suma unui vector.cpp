#include <iostream>
using namespace std;

int sum(int a[],int st,int dr)
{
    if(st == dr)
        return a[st];
    else
    {
        int mij = (st+dr)/2;
        return sum(a,st,mij) + sum(a,mij+1,dr);
    }
}
int n,a[1001];
int main()
{
   cin>>n;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
    cout<<sum(a,1,n);
}
