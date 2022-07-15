/* Tutoriale-Pe.NET - Ridicarea la putere in timp logaritmic
 * Link: https://tutoriale-pe.net/ridicarea-la-putere-timp-logaritmic-c/
 * Rezolvare infoarena: http://www.infoarena.ro/problema/lgput
 */
#include    <iostream>
#include    <fstream>
using namespace std;
ifstream fin("lgput.in");
ofstream fout("lgput.out");
const int MOD = 1999999973;
int RidicareLogaritmica(int N, int P)
{
    int r = 1;
    while(P)
    {
        if(P % 2 == 1)
            r = (1LL * r * N) % MOD;
        N = (1LL * N * N) % MOD;
        P = P / 2;
    }
    return r;
}
void Read()
{
    int N, P;
    fin >> N >> P;
    fout << RidicareLogaritmica(N, P);
}
int main()
{
    Read();
    return 0;
}