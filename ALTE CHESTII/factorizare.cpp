#include <iostream>
using namespace std;

int n, p, a;
int main()
{
    cin>>n;
    a = 2;
    while(n > 1)
    {
        p = 0;
        while(n % a == 0)
        {
            p++;
            n = n / a;
        }
        if(p > 0)
            cout<<a<< " "<<p<<endl;
        a++;
    }
}
