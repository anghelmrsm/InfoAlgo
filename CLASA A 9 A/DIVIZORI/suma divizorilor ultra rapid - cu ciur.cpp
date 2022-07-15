#include <iostream>
#include <fstream>
#include <cmath>
#include <map>
using namespace std;

ifstream fi("eratostene0.in");
ofstream g("eratostene0.out");

//#define cin fi
//#define cout g
#define dim 1000001

unsigned long long int s[dim];

void gen_sum_era()
{
    s[0] = s[1] = 1;
    for(int x = 2 ; x * x <= dim ; x++)
    {
        s[x * x] = s[x * x] + x;
        for(int j = x + 1 ; j * x <= dim ; j++)
            s[x * j] = s[x * j] + x + j;
    }
    for(int x = 2 ; x <= dim ; x++)
        s[x] = x + 1;
}

int main()
{
    gen_sum_era();
    cout<<s[8]; //8 - nr pentru care vrem suma divizorilor;
}
