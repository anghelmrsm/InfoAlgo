#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int k,n,b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>b;
    cout<<(n&(~(1<<b)));
}
