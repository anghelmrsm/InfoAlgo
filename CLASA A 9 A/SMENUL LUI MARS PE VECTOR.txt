cin>>n>>n1;
    for(int x = 1 ; x <= n1 ; x++)
    {
        cin>>st>>dr>>p;
        f[st] += p;
        f[dr+1] -= p;
    }
    for(int x = 1 ; x <= n ; x++)
        f[x] += f[x-1];
    for(int x = 1 ; x <= n ; x++)
        cout<<f[x]<<" ";