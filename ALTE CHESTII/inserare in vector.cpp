#include <iostream>
using namespace std;

#define endl '\n'

//#define cin fi
//#define cout g

int a[1001],n;

void Insert(int a[], int &n)
{
    for(int x = 1 ; x <= n ; x++)
    {
        int k = a[x];
        if(a[x] % 2 == 1)
        {
            n++;
            for(int j = n ; j - 1>= x ; j--)
                a[j] = a[j-1];
            a[x+1] = 2 * k;
            x++;
        }
    }
    for(int x = 1 ;  x <= n ; x++)
        cout<<a[x]<<" ";
}

