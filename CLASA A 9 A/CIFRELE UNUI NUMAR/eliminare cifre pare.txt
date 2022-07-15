#include <iostream>
using namespace std;

int n,m,p = 1,nrf;
int main()
{
    cin>>n;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            nrf = nrf + (n % 10) * p;
            p = p * 10;
        }
        n = n / 10;
    }
    cout<<nrf;
}
