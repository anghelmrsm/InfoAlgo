#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


ifstream fi("memory005.in");
ofstream g("memory005.out");

//#define cin fi
//#define cout g

unsigned long long int fact(int n)
{
    unsigned long long int p = 1;
    for(int x = 1 ; x <= n ; x++)
        p *= x;
    return p;
}

/*
C = n! / (k! * (n-k)!);
*/

int n,k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    cout<<fact(n) / (fact(k) * (fact(n-k)));
}