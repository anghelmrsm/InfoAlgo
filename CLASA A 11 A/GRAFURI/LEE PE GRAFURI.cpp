#include <fstream>
#include <unordered_map>
#include <queue>
using namespace std;

ifstream cin("dmax.in");
ofstream cout("dmax.out");

bool a[1001][1001];
int n,m,traseu[1001],maxim,rez;

inline void bfs(int k)
{
    traseu[k] = 1;
    queue<int> q;
    q.push(k);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int j = 1 ; j <= n ; j++)
            if(traseu[j] == 0 && a[x][j] == 1)
            {
                traseu[j] = traseu[x] + 1;
                q.push(j);
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int x = 1 ; x <= m ; x++)
    {
        int l,c;
        cin>>l>>c;
        a[l][c] = a[c][l] = 1;
    }
    bfs(1);
    for(int x = 1 ; x <= n ; x++)
        if(traseu[x] - 1 > maxim)
        {
            maxim = traseu[x]-1;
            rez = x;
        }
    cout<<rez;
}
