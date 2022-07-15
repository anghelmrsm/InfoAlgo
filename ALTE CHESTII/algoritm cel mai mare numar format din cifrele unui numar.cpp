#include <iostream>
#include <algorithm>
using namespace std;
int n,cf[10],elem_vector,cfn,nrf;

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
   sort(cf,cf + elem_vector,greater<int>());
   for(int x = 0 ; x < elem_vector ; x++)
    nrf = nrf * 10 + cf[x];
   while(cfn)
   {
       nrf = nrf * 10;
       cfn--;
   }
   cout<<nrf;
}
