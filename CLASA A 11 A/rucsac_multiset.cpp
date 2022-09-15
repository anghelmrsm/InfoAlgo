#include <iostream>
#include <vector>
using namespace std;

int dp[10001], n, gmax;
pair<int,int> a[1001];
int main()
{
    cin>>n>>gmax;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x].first>>a[x].second;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 0 ; j + a[x].first <= gmax ; j++)
            dp[j] = max(dp[j], dp[j+a[x].first] + a[x].second);
    cout<<dp[0];
    //for(int x = 0 ; x <= gmax ; x++)
      //cout<<dp[x]<<' ';
}
