#include <iostream>
using namespace std;

int n,a[10005],k,x,j,ok,mij;
int main()
{
   cin>>n>>k;
   for(int x = 1 ; x <= n ; x++)
    cin>>a[x];
   x = 1; ///se pleaca de la pozitia din stanga
   j = n; /// se pleaca de la pozitia din dreapta
   ok = 0; /// variabila search
   while(x <= j && ok != 1)
   {
       mij=(x+j)/2;///mijlocul vectorului
       if(a[mij]==k)
       {
           cout<<mij<<" "<<a[mij];
           ok = 1;
       }
       else

        {
            if(a[mij]<k)
                x=mij+1;///caut in a doua jum
            else
                j=mij-1;///caut in prima jum
        }
   }
   if(ok == 0)
    cout<<"nu s a gasit";
}
