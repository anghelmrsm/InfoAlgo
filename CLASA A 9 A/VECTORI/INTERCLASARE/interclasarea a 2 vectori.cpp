#include <iostream>
using namespace std;

int a[10005],b[10005],c[10005],n,m,i,j,k;
int main()
{
    cin>>n;
    for(int x = 0 ; x < n ; x++)
        cin>>a[x];
    cin>>m;
    for(int x = 0 ; x < m ; x++)
        cin>>b[x];
    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    if(i <= n)
    {
        for(int p = i ; p < n ; p++)
        {
            c[k] = a[p];
            k++;
        }
    }
    if(j <= m)
    {
        for(int p = j ; p < m ; p++)
        {
            c[k] = b[p];
            k++;
        }
    }
    for(int x = 0 ; x < k ; x++)
        cout<<c[x]<<" ";
}


