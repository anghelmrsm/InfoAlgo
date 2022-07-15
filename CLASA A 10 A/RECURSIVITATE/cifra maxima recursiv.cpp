#include <iostream>
using namespace std;

int n;
int cifmax(int n)
{
    if(n <= 9)
        return n;
    else
        return max(n % 10,cifmax(n/10));
}
int main()
{
    cin>>n;
    cout<<cifmax(n);
}
