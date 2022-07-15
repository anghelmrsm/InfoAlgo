///https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
#include <fstream>
#include <deque>
#include <climits>
#include <vector>
using namespace std;

ifstream cin("maxsecvk.in");
ofstream cout("maxsecvk.out");

int n,k,v,s,maxi = -INT_MAX,rez,st,dr,index;
deque<int> q;
vector<int> a;
int main()
{
    cin>>n>>k;
    for(int x = 0 ; x < n ; x++)
    {
        cin>>v;
        a.push_back(v);
    }
    for(int x = 0 ; x < k ; x++)
    {
        while(!q.empty() && a[x] >= a[q[q.size()-1]])
            q.pop_back();
        q.push_back(x);
    }
    for(int x = k ; x < n ; x++)
    {
        cout<<a[q.front()]<<' ';
        while(!q.empty() && q[0] <= x - k)
            q.pop_front();
        while(!q.empty() && a[x] >= a[q[q.size()-1]])
            q.pop_back();
        q.push_back(x);
    }
    cout<<a[q.front()];
}
