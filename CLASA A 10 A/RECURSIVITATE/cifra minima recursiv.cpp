#include <iostream>
using namespace std;

int n;
int cifmin(int n)
{
    if(n <= 9)
        return n;
    else
        return min(n%10,cifmin(n/10));
}
int main()
{
    cin>>n;
    cout<<cifmin(n);
}
