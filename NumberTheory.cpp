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
