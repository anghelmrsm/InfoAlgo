#include <fstream>
using namespace std;

ifstream cin("nrdiv.in");
ofstream cout("nrdiv.out");
int ciur[10000001], prime[1000001], nrprime;
void gen_ciur()
{
    ciur[1] = ciur[0] = 1;
    for (int x = 2; x * x <= 10000; x++)
        if (ciur[x] == 0)
            for (int j = 2; x * j <= 10000; j++)
                ciur[x * j] = 1;
    for (int x = 2; x <= 10000; x++)
        if (ciur[x] == 0)
            prime[++nrprime] = x;
}
int nr_div(int n)
{
    int p = 0, prod = 1,x = 1;
    while (n > 1)
    {
        p = 0;
        while(n % prime[x] == 0)
        {
            p++;
            n = n / prime[x];
        }
        if(p != 0)
            prod = prod * (p+1);
        x++;
    }
    return prod;
}
int n,a[1001],d,v[1001],k;
int main()
{
    gen_ciur();
    cin>>n;
    cout<<nr_div(n);
}