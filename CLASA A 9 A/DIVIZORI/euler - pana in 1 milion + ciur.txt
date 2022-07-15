#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fi("eratostene3.in");
ofstream g("eratostene3.out");

#define cin fi
#define cout g


#define dim 100001

int f[dim+1];
void gen_euler()
{
    for(int x = 1 ; x <= dim ; x++)
        f[x] = x;
    for(int x = 2 ; x <= dim ; x++)
        if(f[x] == x)
        {
            f[x]--;
            for(int j = 2 ; j * x <= dim ; j++)
                f[j * x] = f[j * x] / x * (x - 1);
        }
}

int n,k;
int main()
{
    gen_euler();
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        cout<<f[k]<<" ";
    }
}
