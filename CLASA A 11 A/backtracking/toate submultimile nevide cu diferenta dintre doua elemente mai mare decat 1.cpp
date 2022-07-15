#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

//ifstream cin("submultimi.in");
//ofstream cout("submultimi.out");

int n, a[10], st, dr, v, k;
unordered_map<int,bool> f;

void afisare(int k)
{
    for(int x = 1 ; x <= k ; x++)
        cout<<a[x]<<' ';
    cout<<'\n';
}

void Back(int k)
{
    for(int x = a[k-1]+2 ; x <= n ; x++)
    {
        a[k] = x;
        afisare(k);
        if(k < n)
            Back(k+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    a[0] = -1;
    Back(1);
}
