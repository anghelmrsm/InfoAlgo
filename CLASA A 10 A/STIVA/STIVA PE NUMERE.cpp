#include <fstream>
using namespace std;

ifstream cin("codsecret.in");
ofstream cout("codsecret.out");

//1936 Catalin si codul secret

int n,k,s[100001],elem;
int main()
{
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
    {
        cin>>s[++elem];
        if(elem >= 3)
        {
            int ok1 = 0,ok2 = 0;
            if(s[elem] % s[elem-1] == 0 || s[elem-1] % s[elem] == 0)
                ok1 = 1;
            if(s[elem-1] % s[elem-2] == 0 || s[elem-2] % s[elem-1] == 0)
                ok2 = 1;
            if(ok1 == 1 && ok2 == 1)
                elem-=3;
        }
    }
    if(elem == 0)
        cout<<"Merry Christmas";
    else
    {
        for(int x = 1 ; x <= elem ; x++)
            cout<<s[x]<<" ";
    }
}
