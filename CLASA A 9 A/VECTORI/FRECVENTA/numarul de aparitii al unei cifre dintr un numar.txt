#include <iostream>
#include <algorithm>
using namespace std;

int n,f[11];
int main()
{
    cin>>n;
    while(n)
    {
        f[n%10]++;
        n = n / 10;
    }
    for(int x = 0 ; x <= 9 ; x++)
        if(f[x] != 0)
            cout<<x<<" apare de "<<f[x]<<" ori"<<endl;
}


