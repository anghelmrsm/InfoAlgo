#include <iostream>
using namespace std;

int n;
int sumcif(int n)
{
    if(n == 0)
        return n;
    else
        return n%10+sumcif(n/10);
}
int main()
{
    cin>>n;
    cout<<sumcif(n);
}
