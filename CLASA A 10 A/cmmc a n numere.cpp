#include <iostream>
using namespace std;

int k,n,c1,c2,a[10005];
int cmmdc(int a , int b)
{
    if(b == 0)
        return a;
    else
        return cmmdc(b,a % b);
}

int cmmmc(int a , int b)
{
    int x = cmmdc(a,b);
  return (a * b) / x;
}
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    c1 = cmmmc(a[1],a[2]);
    c2 = cmmdc(a[1],a[2]);
    for(int x = 3 ; x <= n ; x++)
    {
        c1 = cmmdc(c1,a[x]);
        c2 = cmmmc(c2,a[x]);
    }
    cout<<c1<<" "<<c2;
}

