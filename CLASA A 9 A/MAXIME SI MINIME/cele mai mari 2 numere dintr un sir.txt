#include <iostream>
using namespace std;

int n,k,b,a;
int main()
{
    cin>>n;
    cin>>k;
    a = k;
    b = k;
    for(int x = 2 ; x <= n ; x++)
    {
        cin>>k;
        if(k > a)
        {
            b = a;
            a = k;
        }
        else
            if(k > b)
                b = k;
    }
    cout<<a<<" "<<b;
}
