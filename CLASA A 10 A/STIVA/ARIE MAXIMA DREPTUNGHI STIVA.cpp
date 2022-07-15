#include <iostream>
#include <fstream>
#include <stack>
#include <cstring>
using namespace std;

ifstream fi("plaja.in");
ofstream g("plaja.out");

#define cin fi
#define cout g

int Max_Area(int v[], int m)
{
    stack<int> s;
    int max_area = 0;
    int tp = 0;
    int ans = 0;
    int x = 0;
    while(x < m)
    {
        if(s.empty() || v[s.top()] <= v[x])
            s.push(x++);
        else
        {
            tp = s.top();
            s.pop();
            ans = v[tp] * (s.empty() ? x : x - s.top() - 1);
            max_area = max(ans,max_area);
        }
    }

    while(!s.empty())
    {
        tp = s.top();
        s.pop();
        ans = v[tp] * (s.empty() ? x : x - s.top() - 1);
        max_area = max(ans,max_area);
    }
    return max_area;
}
int n,m,k,rez[10001];
char a[10001];
int main()
{
    cin>>n>>m;
    for(int x = 0 ; x <= n ; x++)
    {
        cin.getline(a, 1001);
        for(int j = 0 ; j < m ; j++)
        {
            if(a[j] - '0' == 1)
                rez[j] = 0;
            else if(a[j] - '0' == 0)
                rez[j] += 1;
        }
        k = max(k,Max_Area(rez,m));
    }
    cout<<k;
}
