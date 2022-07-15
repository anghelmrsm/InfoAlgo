#include <iostream>
#include <cmath>
using namespace std;

bool is_prim(int n)
{
    if(n == 1 || n == 0)
    return false;
    else if(n != 2 && n % 2 == 0)
        return false;
    for(int x = 3 ; x * x <= n ; x += 2)
        if(n % x == 0)
            return false;
    return true;
}
int cmmdc(int a,int b)
{
    while(b)
    {
        int k = a % b;
        a = b;
        b = k;
    }
    return a;
}
int Phi(int n)
{
    if(is_prim(n) == true)
        return n-1;
    int a = 2,prod = 1, p = 0;
    while(n > 1)
    {
        p = 0;
        while(n % a == 0)
        {
            p++;
            n = n / a;
        }
        if(p)
            prod *= (a-1) * pow(a,p-1);
        a++;
        if(a * a > n)
            a = n;
    }
    return prod;
}


