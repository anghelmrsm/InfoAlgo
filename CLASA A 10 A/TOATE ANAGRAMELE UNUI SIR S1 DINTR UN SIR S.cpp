#include <fstream>
#include <unordered_map>
#include <cstring>
using namespace std;
///SLIDING WINDOW SI CU HASH
ifstream cin("anagrame2.in");
ofstream cout("anagrame2.out");

int cer;
char s[100001],k[25001];
unordered_map<int,int> f;
unordered_map<int,int> f1;

inline bool egale()
{
    for(int x = 65 ; x <= 123 ; x++)
        if(f[x] != f1[x])
            return false;
    return true;
}

int main()
{
    cin>>cer;
    if(cer == 2)
    {
        /*
        anabnaacdRaanaSA
        ana
        Afisare: ana naa aan ana
        */
        cin>>s>>k;
        int n = strlen(s);
        int m = strlen(k);
        for(int x = 0 ; x < m ; x++)
            f[(int)s[x]]++;
        for(int x = 0 ; x < m ; x++)
            f1[(int)k[x]]++;
        for(int x = m ; s[x] ; x++)
        {
            if(egale() == true)
            {
                int st = x-m;
                int dr = x;
                //cout<<st<<' '<<dr<<'\n';
                for(int j = st ; j < dr ; j++)
                    cout<<s[j];
                cout<<'\n';
            }
            f[(int)s[x-m]]--;
            f[(int)s[x]]++;
        }
        return 0;
    }
}
