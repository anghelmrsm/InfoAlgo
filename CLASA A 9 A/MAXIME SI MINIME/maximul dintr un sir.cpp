#include <iostream>
using namespace std;

int n,k,maxim = -1000000000;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        if(k > maxim)
            maxim = k;
    }
    cout<<maxim;
}
