#include <iostream>
#include <cstring>
#include <fstream>
#include <climits>
using namespace std;

ifstream fi("spectacole.in");
ofstream g("spectacole.out");

#define cin fi
#define cout g

struct program
{
    int st;
    int dr;
} v[101];

int n,ans,rez;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>v[x].st>>v[x].dr;
    for(int x = 1 ; x < n ; x++)
        for(int j = x + 1 ; j <= n ; j++)
            if(v[x].dr > v[j].dr)
            {
                swap(v[x].dr,v[j].dr);
                swap(v[x].st,v[j].st);
            }
    rez = v[1].dr;
    for(int x = 2 ; x <= n ; x++)
        if(rez <= v[x].st)
            {
                ans++;
                rez = v[x].dr;
            }
    cout<<ans+1;
}
