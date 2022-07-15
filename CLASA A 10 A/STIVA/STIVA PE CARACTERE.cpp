#include <iostream>
#include <cstring>
using namespace std;

//3222 treasure

char s[200001];
char rez[200001];
int ctm = 1,elem = 0,n,k,ok = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k>>s;
    for(int x = 0 ; x < n ; x++)
    {
        rez[++elem] = s[x];
        if(s[x] == s[x+1])
            ctm++;
        else
        {
            if(ctm >= k)
                elem = elem - k;
            ctm = 1;
        }
    }
    if(ctm >= k)
        elem -= k;
    memset(s,'\0',n);
    for(int x = 1 ; x <= elem ; x++)
        s[x] = rez[x];
    n = elem;
    while(ok == 0)
    {
        ctm = 1;
        ok = 1;
        elem = 0;
        for(int x = 1 ; x <= n ; x++)
        {
            rez[++elem] = s[x];
            if(s[x] == s[x+1])
                ctm++;
            else
            {
                if(ctm >= k)
                {
                    elem = elem - k;
                    ok = 0;
                }
                ctm = 1;
            }
        }
        if(ctm >= k)
            elem -= k;
        memset(s,'\0',n);
        for(int x = 1 ; x <= elem ; x++)
            s[x] = rez[x];
        n = elem;
    }
    for(int x = 1 ; x <= elem ; x++)
        cout<<(char)rez[x];
}