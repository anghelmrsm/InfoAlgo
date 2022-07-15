#include <iostream>
using namespace std;

bool ver_2457(int n)
{
    while(n)
    {
        if(n % 10 == 2 || n % 10 == 4 || n % 10 == 5 || n % 10 == 7)
            {
                return false;
                break;
            }
        n = n / 10;
    }
    return true;
}
int og(int n)
{
    int og1 = 0;
    while(n)
    {
        og1 = og1 * 10 + (n % 10);
        n = n / 10;
    }
    return og1;
}
bool pal(int n)
{
    if(og(n) == n)
        return true;
    else
        return false;
}
int ver_int(int n)
{
    int nrf = 0;
    while(n)
    {
        if(n % 10 == 6)
            nrf = nrf * 10 + 9;
        else if(n % 10 == 9)
            nrf = nrf * 10 + 6;
        else
            nrf = nrf  * 10 + (n % 10);
        n = n / 10;
    }
    return nrf;
}
bool ver_69(int n)
{
    while(n)
    {
        if(n % 10 == 6 || n % 10 == 9)
            {
                return false;
                break;
            }
        n = n / 10;
    }
    return true;
}
int k,ctm,p,ctm1,rez,n;
int main()
{
    cin>>k>>p>>n;
    for(int x = 1 ; x <= k * 10 - 1; x++)
    {
        if(x % 10 != 0 && ver_2457(x) == true)
            ctm++;
    }
    for(int x = 1 ; x >= 1 ; x++)
    {
        if(pal(x) == true && ver_2457(x) == true && ver_69(x) == true)
            ctm1++;
        if(ctm1 == p)
            {
                rez = x;
                break;
            }
    }
    for(int x = 1 ; x <= k * 10 - 1 ; x++)
    {
       int k = ver_int(x);
       if(ver_2457(k) == true && ver_2457(x) == true)
            cout<<k<<" ";
    }
    ///cout<<ctm<<endl;
    ///cout<<rez<<endl;
}
