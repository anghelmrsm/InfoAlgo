#include <iostream>
#include <climits>
using namespace std;

int dp[1001][1001];
//vector<vector<int>> dp(n+1, vector<int> (m+1));
string s,s1;
int main()
{
    cin>>s>>s1;
    int n = s.size();
    int m = s1.size();
    for(int x = 0 ; x <= n ; x++)///prima linie
        dp[x][0] = x;
    for(int x = 0 ; x <= m ; x++)///prima coloana
        dp[0][x] = x;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            {
                if(s[x-1] == s1[j-1])
                    dp[x][j] = dp[x-1][j-1];
                else
                {
                    /*
                    dp[x][j-1] + 1 -> inserare
                    dp[x-1][j] + 1 -> stergere
                    dp[x-1][j-1]+1 -> inlocuire
                    */
                    int mini = min(dp[x][j-1]+1,dp[x-1][j]+1);
                    dp[x][j] = min(mini,dp[x-1][j-1]+1);
                }
            }
    cout<<dp[n][m];
}