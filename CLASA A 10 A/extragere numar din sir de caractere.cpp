
#include <fstream>
using namespace std;

ifstream cin("parsare.in");
ofstream cout("parsare.out");

int maxim = -100001,k;
char s[8];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin.get(s , 8 , ' '))
    {
        k = atoi(s);//extrage un numar dintr un sir de caractere
        maxim = max(maxim,k);
        cin.get();
    }
    cout<<maxim;
    return 0;
}
