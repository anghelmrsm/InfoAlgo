#include <fstream>
#include <queue>
using namespace std;

ifstream cin("fill.in");
ofstream cout("fill.out");

int n,m,h,k,ans,a[101][101];

queue<pair<int,int>> q;

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};

inline bool inmat(int x, int j)
{
    return (x >= 1 && x <= n && j >= 1 && j <= m);
}

inline void lee(int xs, int js)
{
    q.push(make_pair(xs,js));
    while(!q.empty())
    {
        int x = q.front().first;
        int j = q.front().second;
        q.pop();
        for(int k = 0 ; k <= 3 ; k++)
        {
            int xnou = x + dx[k];
            int jnou = j + dy[k];
            if(a[xnou][jnou] == 1 && inmat(xnou,jnou) == true)
            {
                q.push(make_pair(xnou,jnou));
                a[xnou][jnou] = -1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            cin>>a[x][j];
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            if(a[x][j] == 1)
            {
                ans++;
                lee(x,j);
            }
    /*
    for(int x = 1 ; x <= n ; x++,cout<<'\n')
        for(int j = 1 ; j <= m ; j++)
            cout<<a[x][j]<<' ';
    */
    cout<<ans;
    return 0;
}
