NR DIVIZORI
#include <iostream>
using namespace std;

int n,d,x;
int main()
{
   cin>>n;
   for(x = 1 ; x * x <= n ; x++)
    if(n % x == 0)
   {
       d++;
       if(n / x > x)
        d++;
   }
   cout<<d;
}

AFISARE DIVIZORI
#include <iostream>
using namespace std;

int n,d,x;
int main()
{
   cin>>n;
   for(x = 1 ; x * x <= n ; x++)
    if(n % x == 0)
   {
       cout<<x<<" ";
       if(n / x > x)
        cout<<n/x<<" ";
   }
}

SUMA DIVIZORI
#include <iostream>
using namespace std;

int n,d,x,s;
int main()
{
   cin>>n;
   for(x = 1 ; x * x <= n ; x++)
    if(n % x == 0)
   {
       s = s + x;
       if(n / x > x)
        s = s + (n / x);
   }
   cout<<s;
}

VERIFICARE NUMAR PRIN
#include <iostream>
using namespace std;

int n,x,d;
int main()
{
   cin>>n;
   for(x = 1 ; x * x <= n ; x++)
    if(n % x == 0)
   {
       d++;
       if(n / x > x)
        d++;
   }
   if(d == 2)
    cout<<"e prim";
   else
    cout<<"nu e prim";
}
