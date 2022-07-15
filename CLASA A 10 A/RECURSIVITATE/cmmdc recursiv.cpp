#include <iostream>
using namespace std;

int a,b;
int cmmdc(int a , int b)
{
    if(b == 0)
        return a;
    else
        return cmmdc(b,a % b);
}
int main()
{
    cin>>a>>b;
    cout<<cmmdc(a,b);
}

