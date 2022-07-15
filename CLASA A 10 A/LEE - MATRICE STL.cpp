#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//ifstream cin("labirint.in");
//ofstream cout("labirint.out");

vector<vector<int>> a;
vector<vector<int>> traseu;
int n,k;

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};

inline bool inmat(int x, int j)
{
    return (x >= 0 && x < n && j >= 0 && j < n);
}

inline void lee(int xs, int js)
{
    traseu[xs][js] = 0;
    queue<pair<int,int>> q;
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
            if(inmat(xnou,jnou) == true)
                if(a[xnou][jnou] == 0 && traseu[xnou][jnou] == 0)
                {
                    q.push(make_pair(xnou,jnou));
                    traseu[xnou][jnou] = traseu[x][j] + 1;
                }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int x = 0 ; x < n ; x++)
    {
        vector<int> v(n,0);
        traseu.push_back(v);
        for(int j = 0 ; j < n ; j++)
        {
            cin>>k;
            v.push_back(k);
        }
        a.push_back(v);
    }
    lee(0,0);
    for(int x = 0 ; x < n ; x++,cout<<'\n')
        for(int j = 0 ; j < n ; j++)
            cout<<traseu[x][j]<<' ';
}
