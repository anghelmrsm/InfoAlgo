MAXIMUL DINTR O MATRICE
#include <iostream>
using namespace std;

int n,m,v[101][101],maxim;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            if(v[i][j] > maxim)
                maxim = v[i][j];
    cout<<maxim;
}


MINIMUL DINTR O MATRICE
#include <iostream>
using namespace std;

int n,m,v[101][101],minim = 100000000;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            if(v[i][j] < minim)
                minim = v[i][j];
    cout<<minim;
}


MAXIMUL PE FIECARE LINIE
#include <iostream>
using namespace std;

int n,m,v[101][101],maxim;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int i = 1 ; i <= n ; i++)
    {
        maxim = 0;
        for(int j = 1 ; j <= m ; j++)
            if(v[i][j] > maxim)
                maxim = v[i][j];
        cout<<maxim<<" ";
    }
}

MINIMUL PE FIECARE LINIE
#include <iostream>
using namespace std;

int n,m,v[101][101],minim = 100000000;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int i = 1 ; i <= n ; i++)
    {
        minim = 100000000;
        for(int j = 1 ; j <= m ; j++)
            if(v[i][j] < minim)
                minim = v[i][j];
        cout<<minim<<" ";
    }
}


MAXIMUL PE FIECARE COLOANA
#include <iostream>
using namespace std;

int n,m,v[101][101],maxim;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int j = 1 ; j <= m ; j++)
    {
        maxim = 0;
        for(int i = 1 ; i <= n ; i++)
            if(v[i][j] > maxim)
                maxim = v[i][j];
        cout<<maxim<<" ";
    }
}

MINIMUL PE FIECARE COLOANA
#include <iostream>
using namespace std;

int n,m,v[101][101],minim = 100000000;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int j = 1 ; j <= m ; j++)
    {
        minim = 100000000;
        for(int i = 1 ; i <= n ; i++)
            if(v[i][j] < minim)
                minim= v[i][j];
        cout<<minim<<" ";
    }
}

PARCURGEREA CONTURULUI UNEI MATRICI
#include <iostream>
using namespace std;

int n,m,v[101][101],minim = 100000000;
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>v[i][j];
    for(int j = 1 ; j <= m; j++)
        cout<<v[1][j]<<" ";
    for(int x = 1 ; x <= n ; x++)
        cout<<v[x][m]<<" ";
    for(int j = 1 ; j <= m ; j++)
        cout<<v[n][j]<<" ";
    for(int x = 1 ; x <= n  ; x++)
        cout<<v[x][1]<<" ";
}
