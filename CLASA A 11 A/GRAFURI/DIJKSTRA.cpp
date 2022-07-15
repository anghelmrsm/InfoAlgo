#include <fstream>
#include <vector>
using namespace std;

#define Inf 0x3f3f3f3f

ifstream cin("dijkstra.in");
ofstream cout("dijkstra.out");

vector<vector<int>> a(102, vector<int>(102));
vector<vector<int>> dp(102, vector<int>(102));

int n,nod,l,c,v;

inline void dijkstra(int nod)
{
    for(int k = 1 ; k <= n ; k++)
        for(int x = 1 ; x <= n ; x++)
            for(int j = 1 ; j <= n ; j++)
                if(x != j && (dp[x][j] > dp[x][k] + dp[k][j]))
                    dp[x][j] = dp[x][k] + dp[k][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>nod;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= n ; j++)
            dp[x][j] = Inf;
    for(int x = 1 ; x <= n ; x++)
        dp[x][x] = 0;
    while(cin>>l>>c>>v)
    {
        a[l][c] = v;
        dp[l][c] = v;
    }
    dijkstra(nod);
    for(int j = 1 ; j <= n ; j++)
    {
        if(dp[nod][j] != Inf)
            cout<<dp[nod][j]<<' ';
        else
            cout<<-1<<' ';
    }
}
