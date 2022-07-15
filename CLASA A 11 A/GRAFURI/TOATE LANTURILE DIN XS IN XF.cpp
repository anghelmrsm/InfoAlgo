#include <fstream>
#include <bitset>
#include <vector>
using namespace std;

ifstream cin("lant.in");
ofstream cout("lant.out");

bitset<21> f;
vector<int> v(21);
vector<vector<int>> a(21, vector<int> (21));
int n,m,xs,l,c,xf;

inline void Back(int k)
{
    for(int x = 1 ; x <= n ; x++)
        if(f[x] == 0)
    {
        f[x] = 1;
        v[k] = x;
        if(k == 1 || a[v[k-1]][v[k]] == 1)
        {
            if(v[k] == xf)
            {
                for(int j = 1 ; j <= k ; j++)
                    cout<<v[j]<<' ';
                cout<<'\n';
            }
            else
                Back(k + 1);
        }
        f[x] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int x = 0 ; x < m ; x++)
    {
        cin>>l>>c;
        a[l][c] = 1;
        a[c][l] = 1;
    }
    cin>>xs>>xf;
    f[xs] = 1;
    v[1] = xs;
    Back(2);
}
