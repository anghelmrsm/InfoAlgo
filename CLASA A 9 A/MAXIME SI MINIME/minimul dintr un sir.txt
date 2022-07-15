#include <iostream>
using namespace std;

int n,k,minim = 1000000000;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        if(k < minim)
            minim = k;
    }
    cout<<minim;
}
