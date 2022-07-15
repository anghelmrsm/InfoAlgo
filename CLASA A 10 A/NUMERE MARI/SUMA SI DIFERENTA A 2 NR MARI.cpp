#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("calcmare.in");
ofstream cout("calcmare.out");

vector<int> a,b,c;
char s[1001],semn;

inline bool not_zero()
{
    for(auto x : c)
        if(x != 0)
            return true;
    return false;
}

inline void dif()
{
    for(int x = a.size()-1 ; x >= 0 ; x--)
    {
        if(a[x] < b[x])
        {
            a[x] += 10;
            a[x-1] -= 1;
        }
        c.push_back(a[x]-b[x]);
    }
    if(not_zero() == true)
    {
        reverse(c.begin(),c.end());
        int t = 0;
        if(c[0] == 0)
        {
            t = 0;
            while(c[t] == 0)
                t++;
            for(int x = t ; x < c.size() ; x++)
                cout<<c[x];
        }
        else
            for(auto x : c)
                cout<<x;
        return ;
    }
    else
    {
        cout<<0;
        return ;
    }
}

inline void sum()
{
    for(int x = a.size()-1 ; x >= 0 ; x--)
    {
        if(a[x]+b[x] >= 10 && x > 0)
        {
            a[x-1]++;
            c.push_back((a[x]+b[x]) % 10);
        }
        else
            c.push_back((a[x]+b[x]));
    }
    reverse(c.begin(),c.end());
    for(auto x : c)
        cout<<x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int x = 0 ; s[x] ; x++)
        a.push_back(s[x]-'0');
    cin>>s;
    for(int x = 0 ; s[x] ; x++)
        b.push_back(s[x]-'0');
    int n = a.size(), m = b.size();
    if(n < m)
        for(int x = n ; x < m ; x++)
            a.insert(a.begin(),0);
    if(m < n)
        for(int x = m ; x < n ; x++)
            b.insert(b.begin(),0);
    cin>>semn;
    if(semn == '-')
    {
        dif();
        return 0;
    }
    else
    {
        sum();
        return 0;
    }
}
