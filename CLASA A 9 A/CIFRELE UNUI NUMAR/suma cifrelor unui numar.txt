#include <iostream>
using namespace std;

int n,s;
int main()
{
    cin>>n;
    while(n)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    cout<<s;
}
