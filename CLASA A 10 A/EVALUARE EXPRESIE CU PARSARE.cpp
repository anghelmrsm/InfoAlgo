#include <iostream>
#include <string>
using namespace std;

string s;
int x = 0;

inline long long int eval();
inline long long int termen();
inline long long int factor();

inline long long int eval()
{
    long long int k = termen();
    while(s[x] == '+' || s[x] == '-')
    {
        if(s[x] == '+')
        {
            x++;
            k += termen();
        }
        else if(s[x] == '-')
        {
            x++;
            k -= termen();
        }
    }
    return k;
}

inline long long int termen()
{
    long long int k = factor();
    while(s[x] == '*')
    {
        x++;
        k = k * factor();
    }
    return k;
}

inline long long int factor()
{
    int semn = 1;
    long long int k = 0;
    while(s[x] == '-')
    {
        semn *= -1;
        x++;
    }
    if(s[x] == '(')
    {
        x++;
        k = eval();
        x++;
        return k * semn;
    }
    while(isdigit(s[x]))
    {
        k = k * 10 + (s[x] - '0');
        x++;
    }
    return k * semn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    cout<<eval();
}
