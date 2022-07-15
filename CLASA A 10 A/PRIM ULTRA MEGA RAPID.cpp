inline bool is_prim(int n)
{
    if(n < 2)
        return false;
    if(n == 3 || n == 2)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int x = 5 ; x * x <= n ; x += 6)
        if(n % x == 0 || n % (x + 2) == 0)
            return false;
    return true;
}