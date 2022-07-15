#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//ifstream cin("calcmare.in");
//ofstream cout("calcmare.out");

vector<int> a,b,c;
char s[1001],semn;
int n;

inline void sum()
{
    c.clear();
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
    a.clear();
    for(auto x : c)
        a.push_back(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>s;
    for(int x = 0 ; s[x] ; x++)
        a.push_back(s[x]-'0');
    for(int x = 1 ; x < n ; x++)
    {
        b.clear();
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
        sum();
    }
    for(auto x : a)
        cout<<x;
}
