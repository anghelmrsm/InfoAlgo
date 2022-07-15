#include <fstream>
#include <vector>
using namespace std;

ifstream cin("seti.in");
ofstream cout("seti.out");

char s[15],a[6];
int lit[30],f[10001];
int main()
{
    cin.getline(s,15);
    for(int x = 0 ; s[x] ; x++)
        lit[s[x]-'a'] = x;
    while(cin>>a)
    {
        int nrf = 0, p = 1;
        for(int x = 0 ; x < 4 ; x++)
            nrf = nrf * 10 + lit[a[x] - 'a'];
        f[nrf]++;
    }
    for(int x = 0 ; x < 10000 ; x++)
        if(f[x] != 0)
        {
            vector<char> sol;
            int nrf = x;
            for(int j = 0 ; j <= 3 ; j++)
            {
                sol.push_back(s[nrf % 10]);
                nrf = nrf / 10;
            }
            while(f[x]--)
            {
                for(int j = 3 ; j >= 0 ; j--)
                    cout<<sol[j];
                cout<<'\n';
            }
        }
}
