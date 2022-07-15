#include <iostream>
#include <unordered_map>
using namespace std;

//ifstream cin("smax.in");
//ofstream cout("smax.out");

int n, a[10];
unordered_map<int,bool> f;

void afisare()
{
    for(int x = 1 ; x <= n ; x++)
        cout<<a[x]<<' ';
    cout<<'\n';
}

void Back(int k)
{
    for(int x = 1 ; x <= n ; x++)
        if(f[x] == 0)
    {
        a[k] = x;
        f[x] = 1;
        if(k < n)
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
    cin>>n;
    Back(1);
}
