#include <fstream>
#include <climits>
#include <cmath>
using namespace std;

ifstream cin("spp.in");
ofstream cout("spp.out");

#define dim 1460000

unsigned long long int sp[1500001],s,d;
int n;

unsigned long long int Bn_Search(unsigned long long int s, unsigned long long int d)
{
    unsigned long long int st = s, dr = dim;
    while(st <= dr)
    {
        int mij = (st + dr) / 2;
        if(sp[mij] - sp[s-1] == d)
            return mij;
        else
        {
            if(sp[mij] - sp[s-1] > d)
                dr = mij - 1;
            else if(sp[mij] - sp[s-1] < d)
                st = mij + 1;
        }
    }
    return st;
}

void gen()
{
    for(int x = 1 ; x <= dim ; x++)
        sp[x] = sp[x-1] + (x * x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    gen();
    while(n--)
    {
        cin>>s>>d;
        d = d * d;
        cout<<Bn_Search(s,d)<<endl;
    }
}
