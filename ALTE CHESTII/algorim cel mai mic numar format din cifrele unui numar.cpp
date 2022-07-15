#include <iostream>
#include <algorithm>
using namespace std;
int n,nrf,p = 1,cfn,elem_vector,cf[10];
int main()
{
    cin>>n;
    while(n)
    {
        if(n % 10 == 0)
            cfn++;
        else
            cf[elem_vector++] = n % 10;
        n = n / 10;
    }
    sort(cf,cf + elem_vector);
    for(int x = 0 ; x < elem_vector ; x++)
    {
        if(x == 1)
        {
            if(cfn != 0)
            {
                for(int y = 1 ; y <= cfn ; y++)
                    nrf = nrf * 10;
            }
        }
        nrf = nrf * 10 + cf[x];
    }
    cout<<nrf;
}
