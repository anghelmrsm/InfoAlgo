#include <iostream>
#include <algorithm>
using namespace std;

int n,m,a[100001],b[100001],c[100001],k,i,j;
int main()
{
    cin>>n;
    for(int x = 0 ; x < n ; x++)
        cin>>a[x];
    cin>>m;
    for(int x = 0 ; x < m ; x++)
        cin>>b[x];
    while(i < n && j < m)
        if(a[i] == b[j])
        {
            c[k] = a[i];
            k++;
            i++;
            j++;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
    for(int x = 0 ; x < k ; x++)
        cout<<c[x]<<" ";
}


