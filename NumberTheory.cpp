void EulerTotient()
{
    a[1]=1;
    for(int i=2;i<1000001;i++)
        a[i]=i;
    for(int i=2;i<1000001;i+=2)
        a[i]/=2;
    for(int i=3;i<1000001;i+=2)
    {
        if(a[i]==i)
        {
            for(int j=i;j<1000001;j+=i)
            {
                a[j]=a[j]/i*(i-1);
            }
        }
    }
}

ll modPower(ll a,ll b,ll mod) 
{
	ll x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
ll modInverse(ll a,ll mod)
{	
	return modPower(a,mod-2,mod); 
}
