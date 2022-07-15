#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

//ifstream cin("combinari.in");
//ofstream cout("combinari.out");

int n, a[10], st, dr, v, k;
unordered_map<int,bool> f;

void afisare()
{
    for(int x = 1 ; x <= v ; x++)
        cout<<a[x]<<' ';
    cout<<'\n';
}

void Back(int k)
{
    for(int x = 1 ; x <= n ; x++)
        if(f[x] == 0)
        {
            f[x] = 1;
            a[k] = x;
            if(k < v)
                Back(k+1);
            else
                afisare();
            f[x] = 0;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>v;
    Back(1);
}
