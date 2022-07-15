#include <iostream>
#include <cmath>
using namespace std;

long long int n,ctm,nrf;
int main()
{
   cin>>n;
   long long int n1 = n;
   while(n1)
    {
        ctm++;
        n1 = n1 / 10;
    }
    long long int h = pow(10,ctm/2);
    cout<<(((n / h) / 10) * h + (n % h));;
}