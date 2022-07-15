#include <fstream>
#include <vector>
using namespace std;

ifstream cin("submatrix.in");
ofstream cout("submatrix.out");

//#define mod 1234567

int n,k,ans;
//int a[101][101];
vector<vector<int>> a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int x = 0 ; x < n ; x++)
    {
        vector<int> v;
        for(int j = 0 ; j < n ; j++)
        {
            cin>>k;
            v.push_back(k);
            //cin>>a[x][j];
        }
        a.push_back(v);
    }

    for(int x = 1 ; x < n ; x++)
        for(int j = 1 ; j < n ; j++)
            if(a[x][j] == 1)
            {
                int mini = min(a[x-1][j],a[x][j-1]);
                int mini1 = min(a[x-1][j-1],mini);
                a[x][j] += mini1;
                ans = max(ans,a[x][j]);
            }
    cout<<ans;
}

