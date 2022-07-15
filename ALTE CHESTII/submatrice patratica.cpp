#include <fstream>
using namespace std;

ifstream cin("terencasa.in");
ofstream cout("terencasa.out");

int n,m,a[201][201],maxim;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            cin>>a[x][j];
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            if(a[x][j] != 0)
            {
                int max1 = min(a[x][j-1],a[x-1][j]);
                int max2 = min(max1,a[x-1][j-1]);
                a[x][j] += max2;
                if(a[x][j] > maxim)
                    maxim = a[x][j];
            }
    cout<<maxim<<'\n';
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            if(a[x][j] == maxim)
            {
                cout<<x-maxim+1<<" "<<j-maxim+1<<" "<<x<<" "<<j;
                return 0;
            }
}
