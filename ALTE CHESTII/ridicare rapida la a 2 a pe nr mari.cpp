void ridicare_la_2(int n)
{
    int s = 0;
    a[0] = a[1] = 1;
    while(n)
    {
        int p = 1,ctm = 0;
        while(p <= a[0] || ctm != 0)
        {
            a[p] = a[p] * 2 + ctm;
            ctm = a[p] / 10;
            a[p] = a[p] % 10;
            a[0] = max(a[0],p);
            p++;
        }
        n--;
    }
    for(int x = a[0] ; x >= 1 ; x--)
        s += a[x];
    cout<<s;
}