#include <iostream>
#include <cstring>
#include <fstream>
#include <climits>
using namespace std;

ifstream fi("radiera.in");
ofstream g("radiera.out");

#define cin fi
#define cout g

int dp[1001],a[1001],n,m,ans;

void dinamica()
{
    for(int x = 1 ; x <= n ; x++)
    {
        dp[x] = 1;
        for(int j = 1 ; j < x ; j++)
            if(a[x] >= a[j] && dp[x] < dp[j] + 1)
                dp[x] = dp[j] + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    dinamica();
    for(int x = 1 ; x <= n ; x++)
        ans = max(ans,dp[x]);
    cout<<n-ans;
}
