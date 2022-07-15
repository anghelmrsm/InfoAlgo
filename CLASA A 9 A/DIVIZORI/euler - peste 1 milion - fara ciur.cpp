#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fi("maxprimeintreele.in");
ofstream g("maxprimeintreele.out");

//#define cin fi
//#define cout g


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

unsigned long long int  Euler(unsigned long long int n)
{
    unsigned long long int prod = n,a = 2;
    while(n > 1)
    {
        if(n % a == 0)
        {
            prod = prod / a * (a-1);
            while(n % a == 0)
                n = n / a;
        }
        a++;
        if(a * a > n)
            a = n;
    }
    return prod;
}
unsigned long long int n;
int main()
{
   cin>>n;
   cout<<Euler(n);
}
