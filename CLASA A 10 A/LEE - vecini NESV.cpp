#include <iostream>
#include <queue>
using namespace std;

/*
        ALGORITM GASIRE DRUM CEL MAI SCURT
        EX:
        Start:1,1;
        Final:5,1;
        1 - obstacole
        0 - drum liber

        5 5
        0 0 1 1 0
        1 0 0 0 1
        1 1 1 0 1
        1 0 0 0 1
        0 0 1 1 1

        nr pasi pana la 5,1 - 10;

        traseu:

        1 2 0 0 0
        0 3 4 5 0
        0 0 0 6 7
        0 0 8 7 0
        11 10 9 0 0
    */

int n,m,a[1001][1001],traseu[1001][1001],jnou,inou;

const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};

bool inmat(int x,int j)
{
    return x >= 1 && x <= n && j >= 1 && j <= m;
}
void lee(int is,int js)
{
    queue<pair<int,int>>q;
    q.push(make_pair(is,js));
    traseu[is][js] = 1;
    while(q.empty() != 1)
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0 ; k <= 3 ; k++)
        {
            inou = dx[k] + x;
            jnou = dy[k] + y;
            if(inmat(inou,jnou) == true && a[inou][jnou] == 0 && traseu[inou][jnou] == 0)
            {
                traseu[inou][jnou] = traseu[x][y] + 1;
                q.push(make_pair(inou,jnou));
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int x = 1 ; x <= n ; x++)
        for(int j = 1 ; j <= m ; j++)
            cin>>a[x][j];
    lee(1,1);
    cout<<traseu[5][1] - 1;
}
