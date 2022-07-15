#include <iostream>
using namespace std;

int n,k,v[1001],r[1001];

void combi(int n, int k)
{
    for(int x = 1 ; x <= k ; x++)
        v[x] = n - x + 1;
    for(int x = 1 ; x <= k ; x++)
    {
        int nr = x, a = 2;
        while(nr > 1)
        {
            if(nr % a == 0)
            {
                int p = 0;
                for(int j = 1 ; j <= k ; j++)
                    if(v[j] % a == 0)
                        p = j;
                v[p] /= a;
                nr /= a;
            }
            else
                a++;
            if(a * a > nr)
                a = nr;
        }
    }
    int r[1001];
    r[0] = 1;
    r[1] = 1;
    for(int x = 1 ; x <= k ; x++)
    {
        int t = 0;
        for(int j = 1 ; j <= r[0] ; j++)
        {
            int nrf = t + r[j] * v[x];
            r[j] = nrf % 10;
            t = nrf / 10;
        }
        while(t)
        {
            r[++r[0]] = t % 10;
            t /= 10;
        }
    }
    for(int x = r[0] ; x > 0 ; x--)
        cout << r[x];
}

/*
C = n! / (k! * (n-k)!);
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    combi(n,k);
}
