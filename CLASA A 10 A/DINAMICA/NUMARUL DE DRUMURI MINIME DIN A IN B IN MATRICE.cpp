#include <fstream>
#include <queue>
using namespace std;

ifstream cin("rege.in");
ofstream cout("rege.out");

long long int dp[1005][1005],a[1005][1005],n,m,xs,js,xf,jf;

#define mod 666013

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

inline bool inmat(int x, int j)
{
    return (x >= 1 && x <= n && j >= 1 && j <= m);
}

inline void lee(int xs, int js)
{
    queue<pair<int,int>> q;
    a[xs][js] = 1;
    dp[xs][js] = 1;
    q.push(make_pair(xs,js));
    while(!q.empty())
    {
        int x = q.front().first;
        int j = q.front().second;
        q.pop();
        for(int k = 0 ; k < 8 ; k++)
        {
            int xnou = x + dx[k];
            int jnou = j + dy[k];
            if(inmat(xnou,jnou) == true && a[xnou][jnou] == 0)
            {
                a[xnou][jnou] = a[x][j] + 1;
                dp[xnou][jnou] = dp[x][j] % mod;
                q.push(make_pair(xnou,jnou));
            }
            else if(inmat(xnou,jnou) == true && a[xnou][jnou] == a[x][j] + 1)
            {
                dp[xnou][jnou] = (dp[xnou][jnou] + dp[x][j]) % mod;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    cin>>xs>>js;
    cin>>xf>>jf;
    lee(xs,js);
    cout<<dp[xf][jf] % mod;
}