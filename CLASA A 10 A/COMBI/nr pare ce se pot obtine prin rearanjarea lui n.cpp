#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;

unsigned long long int fact(int n)
{
    unsigned long long int p = 1;
    for(int x = 1 ; x <= n ; x++)
        p *= x;
    return p;
}

char s[21];
map<int,int> f;
unsigned long long int sum = 1,n,cif,ctm;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(n)
    {
        cif++;
        if((n % 10) % 2 == 0)
            ctm++;
        n = n / 10;
    }
    cout<<ctm * fact(cif-1);
}