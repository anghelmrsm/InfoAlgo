void Insert(int a[], int &n)
{
    int ctm = 0;
    for(int x = 0 ; x < n ; x++)
        if(a[x] % 2 == 1)
            ctm++;
    int l = n+ctm-1;
    for(int x = n - 1 ; x >= 0 ; x--)
    {
        if(a[x] % 2 == 1)
            a[l--] = 2 * a[x];
        a[l--] = a[x];
    }
    n = n + ctm;
}