int n,m, A[1001][1001], S[1001][1001];
//citire n,m,A[][]

for(int i = 0 ; i <= n ; i ++)
    S[i][0] = 0;
for(int j = 0 ; j <= m ; j ++)
    S[0][j] = 0;

for(int i = 1 ; i <= n ; i ++)
    for(int j = 1 ; j <= m ; j ++)
        S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + A[i][j];

int is,js; // coltul stanga sus
int ij,jj; // coltul dreapta jos
//citire is,js, ij,jj;

cout << S[ij][jj] - S[is-1][jj] - S[ij][js-1] + S[is-1][js-1];