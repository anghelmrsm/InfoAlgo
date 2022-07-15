#include <iostream>
using namespace std;

int n,k,b = 10000,a = 10000,c = 10000;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        if(k < a)
        {
            c = b;
            b = a;
            a = k;
        }
        else
            if(k < b)
                {
                    c = b;
                    b = k;
                }
            else
                if(k < c)
                    c = k;
    }
    cout<<a<<" "<<b<<" "<<c;
}
