SUMA CIFRELOR UNUI NUMAR
#include <iostream>
using namespace std;

int n,x,d;
int main()
{                 
   cin>>n;
   while(n != 0)
   {
       s = s + n % 10;
       n = n / 10;
   }
   cout<<s;
}

NUMAR CIFRE PARE-IMAPRE
#include <iostream>
using namespace std;

int n,i,p;
int main()
{
   cin>>n;
   while(n != 0)
   {
       if((n % 10) % 2 == 0)
        p++;
       else
        i++;
       n = n / 10;
   }
   cout<<p<<" "<<i;
}

CIFRA MAXIMA DINTR UN NUMAR
#include <iostream>
using namespace std;

int n,maxim = 0;
int main()
{
   cin>>n;
   while(n != 0)
   {
       if(n%10 > maxim)
        maxim = n % 10;
       n = n / 10;
   }
   cout<<maxim;
}

CIFRA MINIMA DINTR UN NUMAR
#include <iostream>
using namespace std;

int n,minim = 9;
int main()
{
   cin>>n;
   while(n != 0)
   {
       if(n % 10 < minim)
        minim = n % 10;
       n = n / 10;
   }
   cout<<minim;
}

OGLINDITUL UNUI NUMAR
#include <iostream>
using namespace std;

int n,a;
int main()          
{
   cin>>n;
   while(n != 0)
   {
       a = a * 10 + n % 10;
       n = n / 10;
   }
   cout<<a;
}
