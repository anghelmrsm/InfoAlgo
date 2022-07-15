#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream fi("lungimesubsircomunmaximal.in");
ofstream g("lungimesubsircomunmaximal.out");

#define cin fi
#define cout g

int n,m;
char a[1001],b[1001],ans[1001];
int dp[1001][1001],elem;

void dinamica()
{
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
    {
        if(a[x-1] == b[j-1])
            dp[x][j] = dp[x-1][j-1] + 1;
        else
            dp[x][j] = max(dp[x-1][j],dp[x][j-1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b;
    n = strlen(a);
    m = strlen(b);
    dinamica();
    cout<<dp[n][m];
}
