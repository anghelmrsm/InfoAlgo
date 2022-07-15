while(n)
       {
           ans += ((n % 2) * p);
           p = p * 10;
           n = n / 2;
       }
       cout<<ans;