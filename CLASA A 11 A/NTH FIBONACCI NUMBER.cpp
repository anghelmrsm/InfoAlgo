   double powv2(double a, int b)
    {
        double rez = 1;
        while(b)
        {
            if(b & 1)
                rez *= a;
            a *= a;
            b >>= 1;
        }
        return rez;
    }
    
    int fib(int n) {
        /*
        nth fibb = (((sqrt(5) + 1) / 2) ^ n) / sqrt(5);
        */
        const double ct = sqrt(5);
        double phi = (ct + 1) / 2;
        return round(powv2(phi,n) / ct);
    }