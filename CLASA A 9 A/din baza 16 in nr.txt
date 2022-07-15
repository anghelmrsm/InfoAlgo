#include <iostream>
#include <cstring>
using namespace std;

char s[256];
unsigned long long int nrf,p = 1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.getline(s,256);
    for(int x = strlen(s)-1 ; x >= 0 ; x--)
    {
        if(isdigit(s[x]))
            nrf = nrf + ((s[x] - '0') * p);
        else
            nrf = nrf + ((s[x] - 'A' + 10) * p);
        p = p * 16;
    }
    cout<<nrf;
}
