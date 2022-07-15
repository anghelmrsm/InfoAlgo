#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("ascdesc.in");
ofstream cout("ascdesc.out");

long long int n,k,a[100005],h_max,poz_max,s,dif;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    for(int x = 1 ; x <= n ; x++)
            if(a[x] > h_max)
            {
                h_max = a[x];
                poz_max = x;
            }
    for(int k = 1 ; k <= n ; k++)
    {
        s = 0;
        if(k > poz_max)
        {
            long long int max_cp0 = 0;
            int poz_max_cp0 = 0;
            for(int x = k ; x >= poz_max ; x--)
            {
                dif = abs(a[poz_max] - a[x]);
                s += dif;
            }
            for(int x = 1 ; x <= poz_max - 1 ; x++)
                if(a[x] > max_cp0)
                {
                    max_cp0 = a[x];
                    poz_max_cp0 = x;
                }
            for(int x = poz_max - 1 ; x >= poz_max_cp0 ; x--)
            {
                dif = abs(a[poz_max_cp0] - a[x]);
                s += dif;
            }
        }
        if(k < poz_max)
        {
            for(int x = k ; x <= poz_max ; x++)
            {
                dif = abs(a[poz_max] - a[x]);
                s += dif;
            }
        }
        if(k == poz_max)
        {
            long long int max_cp = 0;
            int poz_max_cp = 0;
            for(int x = 1 ; x <= k - 1 ; x++)
                if(a[x] > max_cp)
                {
                    max_cp = a[x];
                    poz_max_cp = x;
                }
            for(int x = poz_max_cp ; x <= k - 1 ; x++)
            {
                dif = abs(a[poz_max_cp] - a[x]);
                s += dif;
            }
        }
        cout<<s<<" ";
    }
}
