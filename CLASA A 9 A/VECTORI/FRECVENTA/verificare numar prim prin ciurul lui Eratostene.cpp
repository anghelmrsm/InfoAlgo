#include <iostream>
using namespace std;

int ciur[10000001], prime[1000001], nrprime;
#define mil 1000000
void gen_ciur()
{
    ciur[1] = ciur[0] = 1;
    for(int x = 1 ; x * x <= mil ; x++)
        if(ciur[x] == 0)
            for(int j = 2 ; x * j <= mil ; j++)
                ciur[x * j] = 1;
    for(int x = 2 ; x <= mil ; x++)
        if(ciur[x] == 0)
            prime[++nrprime] = x;
}

bool bn_search(int k)
{
    int x = 1,mij = 0;
    int j = nrprime;
    while(x <= j)
    {
        mij = (x+j) / 2;
        if(prime[mij] == k)
            {
                return true;
                break;
            }
        else
        {
            if(prime[mij] < k)
                x = mij + 1;
            else
                j = mij - 1;
        }
    }
    return false;
}
int n;
int main()
{
   cin>>n;
   gen_ciur();
   cout<<bn_search(n);
}
