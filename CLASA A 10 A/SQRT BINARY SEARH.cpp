#include <iostream>
using namespace std;
///afisati radacina patrata a unui nr - (4 -> 2)
///adica sqrt

int n;

inline int bn(int n)
{
    int st = 0, dr = n, ans;
    while(st <= dr)
    {
        int mid = st + (dr-st) / 2;
        int square = mid * mid;
        if(square == n)
            return mid;
        else
        {
            if(square < n)
            {
                ans = mid;
                st = mid + 1;
            }
            else
                dr = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cin>>n;
    cout<<bn(n);
}
