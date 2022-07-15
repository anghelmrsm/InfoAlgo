Prima problema:

#include <iostream>
using namespace std;

int n,a[10005],k1,k2,d,minim = 1000000000;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    for(int x = 1 ; x < n ; x++)
        {
            for(int j = x + 1 ; j <= n ; j++)
            {
                if(a[x] != a[j])
                     d = abs(a[x] - a[j]);
                if(d == minim)
                {
                    if(a[x] > k1)
                        k1 = a[x];
                    if(a[j] > k2)
                        k2 = a[j];
                }
                if(d < minim)
                {
                    minim = d;
                    k1 = a[x];
                    k2 =  a[j];
                }
            }
        }
    if(k1 > k2)
        swap(k1,k2);
    cout<<k1<<"/"<<k2;
}




A doua problema:

#include <iostream>
#include <cmath>
using namespace std;

int best_power(int n,int k)
{
    int x = k;
    int i = 1;
    while(x <= n)
    {
        x = pow(k,i);
        i++;
    }
    return i - 2;
}
int n,a[10005];
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    cout<<a[1]<<" ";
    for(int x = 2 ; x <= n ; x++)
    {
        a[x] = pow(x,best_power(a[x],x));
        cout<<a[x]<<" ";
    }
}
