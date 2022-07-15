#include <fstream>
#include <queue>
using namespace std;

ifstream cin("ubuph.in");
ofstream cout("ubuph.out");


#define nmax 1005
#define mmax 1005
#define lli long long int
#define inf 9223372036854775807

lli a[nmax][mmax], b[nmax][mmax];
int n,m,is,js,fs,fi;

const int dx[] = {0,0,-1,1};
const int dy[] = {1,-1,0,0};

bool inmat(int x,int j)
{
    return x >= 1 && x <= n && j >= 1 && j <= m;
}

void lee(int is,int ij)
{
    queue<pair<int,int>>q;
    b[is][ij] = a[is][ij];
    q.push(make_pair(is,ij));
    while(!q.empty())
    {
        int x = q.front().first;
        int j = q.front().second;
        for(int k = 0 ; k <= 3 ; k++)
        {
            int xnou = x + dx[k];
            int jnou = j + dy[k];
            if(b[xnou][jnou] > a[xnou][jnou] + b[x][j] && inmat(xnou,jnou) == true)
            {
                b[xnou][jnou] = a[xnou][jnou] + b[x][j];
                q.push(make_pair(xnou,jnou));
            }
        }
        q.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
        {
            cin>>a[x][j];
            b[x][j] = inf;
        }
    cin>>is>>js>>fi>>fs;
    lee(is,js);
    cout<<b[fi][fs];
}

