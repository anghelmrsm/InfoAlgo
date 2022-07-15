#include <fstream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("lantminim.in");
ofstream cout("lantminim.out");

bool a[101][101];
int n,m,traseu[101],maxim,rez,xs,xf;
vector<int> sol;

inline void bfs(int k)
{
    queue<int> q;
    q.push(k);
    traseu[k] = 1;
    //sol.push_back(k);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int j = 1 ; j <= n ; j++)
            if(traseu[j] == 0 && a[x][j] == 1)
            {
                q.push(j);
                traseu[j] = traseu[x] + 1;
                //sol.push_back(j);
            }
    }
}

inline void drum(int k)
{
    sol.push_back(k);
    if(k == xs || traseu[k] == 0)
        return ;
    else
    {
        for(int x = n ; x >= 1 ; x--)
            if(traseu[k] == traseu[x] + 1 && a[k][x] == 1)
            {
                drum(x);
                break;
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>xs>>xf;
    int l,c;
    while(cin>>l>>c)
        a[l][c] = a[c][l] = 1;
    bfs(xs);
    drum(xf);
    reverse(sol.begin(),sol.end());
    cout<<sol.size()<<'\n';
    for(auto x : sol)
        cout<<x<<' ';
}
