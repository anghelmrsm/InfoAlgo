#include <iostream>
using namespace std;

int n,p = 1;
int main()
{
    cin>>n;
    while(n)
    {
        p = p * (n % 10);
        n = n / 10;
    }
    cout<<p;
}
