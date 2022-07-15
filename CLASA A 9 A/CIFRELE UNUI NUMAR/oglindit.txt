#include <iostream>
using namespace std;

int n,og;
int main()
{
    cin>>n;
    while(n)
    {
        og = og * 10 + (n % 10);
        n = n / 10;
    }
    cout<<og;
}
