#include <bits/stdc++.h>
#include <chrono>


using namespace std;

// A sample function whose time taken to
// be measured

#define lim 1000000
bitset<lim> ciur;

void gen_ciur()
{
    ciur[1] = ciur[0] = 1;
    for(int x = 1 ; x * x <= lim ; x++)
        if(ciur[x] == 0)
            for(int j = 2 ; x * j <= lim ; j++)
                ciur[x * j] = 1;
}

int main()
{
    auto start = chrono::high_resolution_clock::now();

    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);

    gen_ciur();

    auto end = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
