for(int x = 1 ; x <= t ; x++)
    {
        cin>>x1>>y1>>x2>>y2>>v;
        a[x1][y1] += v;
        a[x1][y2 + 1] -= v;
        a[x2+1][y1] -= v;
        a[x2+1][y2+1] += v;
    }
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];