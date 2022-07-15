#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

//ifstream cin("permutari2.in");
//ofstream cout("permutari2.out");

int n, a[10], st, dr, v;
unordered_map<int,bool> f;

void afisare()
{
    for(int x = 1 ; x <= v ; x++)
        cout<<a[x]<<' ';
    cout<<'\n';
}

void Back(int k)
{
    for(int x = a[k-1] + 1 ; x <= n - v + k ; x++)
    {
        a[k] = x;
        if(k < v)
            Back(k+1);
        else
            afisare();
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
