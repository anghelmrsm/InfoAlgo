#include <iostream>
using namespace std;

int n = 10,k;
int a[10] = {16, 27, 43, 45, 49, 60, 68, 81, 92, 96};
int bn_search(int x , int j , int x1)
{
    if(x > j)
        return 0;
    else
    {
        int mij = (x+j) / 2;
        if(a[mij] == x1)
            return 1;
        if(x1 < a[mij])
            return bn_search(x,mij-1,x1);
        else
            return bn_search(mij+1,j,x1);
    }
}
int main()
{
    cin>>k;
    cout<<bn_search(0,n-1,k);
}
