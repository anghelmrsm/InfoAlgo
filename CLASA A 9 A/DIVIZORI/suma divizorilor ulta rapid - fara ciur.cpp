#include <iostream>
#include <cmath>
using namespace std;

long long int n;
long long int sum_div(long long int n)
{
    long long int p = 0,a = 2,sum = 1,k;
    while(n > 1)
    {
        p = 0;
        while(n % a == 0)
        {
            n /= a;
            p++;
        }
        if(p != 0)
        {
            k = 0;
            k = pow(a,(p+1)) - 1;
            sum *= (k / (a-1));
        }
        a++;
        if(a * a > n)
            a = n;
    }
    return sum;
}
int main()
{
   cin>>n;
   cout<<sum_div(n);
}
