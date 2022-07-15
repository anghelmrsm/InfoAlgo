#include <iostream>
using namespace std;

unsigned long long int putere(unsigned long long int a,unsigned long long int b,unsigned long long int k)
{
    unsigned long long int p = 1;
    while(b)
    {
        if(b % 2 == 1)
            p = (p * a) % k;
        a = (a * a) % k;
        b = b / 2;
    }
    return p;
}
unsigned long long int n,s,k,last = 1,a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b>>k;
    while(k--)
        last *= 10;
    cout<<putere(a,b,last);
}
