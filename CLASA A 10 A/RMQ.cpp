#include <fstream>
#include <vector>
using namespace std;

ifstream cin("rmq.in");
ofstream cout("rmq.out");

int rmq[18][100002], n, m, log[100002], q, st, dr, k;
vector<int> a;

inline int solve(int st, int dr)
{
    int s = dr - st + 1;
    int k = log[s];
    int h = s - (1 << k);
    return min(rmq[k][st], rmq[k][st+h]);
}

int main()
{
	cin>>n>>q;
	for(int x = 1 ; x <= n ; x++)
    {
        cin>>k;
        a.push_back(k);
        rmq[0][x] = k;
    }
    log[1] = 0;
    for(int x = 2 ; x <= n ; x++)
        log[x] = log[x / 2] + 1;
    /// 1<<x = pow(2,x)
    for(int x = 1 ; (1<<x) <= n ; x++)
        for(int j = 1 ; j + (1<<x) - 1 <= n ; j++)
            {
                int l = 1<<(x-1);
                rmq[x][j] = min(rmq[x-1][j], rmq[x-1][j+l]);
            }
    while(q--)
    {
        cin>>st>>dr;
        cout<<solve(st,dr)<<'\n';
    }
}
