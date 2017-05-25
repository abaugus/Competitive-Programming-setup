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
// Factoring
vector<pair<int,int> > factors;
void getFactors(int n)
{
	factors.clear();
	int temp;
	int d = 1;
	for(int i = 2;i*i<=n;i+=d,d=2)
	{
		if(n%i==0)
		{
			temp = 0;
			while(n%i==0)
			{
				n/=i;
				++temp;
			}
			factors.pb(mp(i,temp));
		}
	}
	if(n!=1)
		factors.pb(mp(n,1));
}

// Finding Divisors
vector<int> divisors;
void getDivisors(int ind = 0,int res = 1)
{
	if(ind == factors.size())
	{
		divisors.push_back(res);
		return;
	}
	for (int i = 0; i <= factors[ind].second; i++) 
	{
        getDivisors(ind + 1, res);
        res *= factors[ind].first;
    }
}
