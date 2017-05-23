/*
ID: ab13123002
LANG: C++              
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
#define frv(i,a) for(typeof(a.begin()) i = a.begin(); i != a.end(); i++)
#define fr(i,a,b)  for (int i=(a);i<(b); i++)
#define frd(i,a,b) for (int i=(a); i>=(b); i--)
#define setall(a,val) memset(a, val, sizeof a)
#define db(a) cout << #a << " = " << a <<el
#define dba(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<el
#define all(a) a.begin(), a.end()
#define sc(a) scanf("%d", &a)
#define el "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mod 10000000007
const long double eps = 1e-9;
const double pi = acos(-1.0);
const long long inf = 1e18;

#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define mp make_pair
#define pb push_back 
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define sortv(a) sort(a.begin(),a.end())
#define test()  int t; cin>>t; while(t--)
#define fi first
#define se second
#define el "\n"
#define ll long long
#define ull unsigned ll
#define TRACE
using namespace std;

//FILE *fin = freopen("input.txt","r",stdin);
//FILE *fout = freopen("output.txt","w",stdout);

#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

#else

#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif

typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

#define MAXN 200009

int main()
{
    
    return 0;
}
long long arr[100500]={0};
long long int arr1[100000];
long long modPow(long long a,long long x,long long p) {
    long long res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}
long long modInverse(long long a,long long p) {
    return modPow(a, p-2, p);
}
long long modBinomial(long long n,long long k,long long p) {
	long long numerator = 1; // n * (n-1) * ... * (n-k+1)
    for (long long int i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }
	long long denominator = 1; // k!
    for (long long int i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }
	return ( numerator* modInverse(denominator,p) ) % p;
}
long long int gcd(long long int a,long long int b)//greatest common divisor
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
inline void scann(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar_unlocked());
    if(c=='-') {neg=1;c=getchar_unlocked();}
    for(;c>47 && c<58;c = getchar_unlocked()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
inline int scan()
{
    int n=0;
    char ch=getchar_unlocked();
    while(ch<'0'||ch>'9')
        ch=getchar_unlocked();
    while(ch>='0'&&ch<='9')
    {
        n=(n<<3)+(n<<1)+ch-'0';
        ch=getchar_unlocked();
    }
    return n;
}
template <class T>
inline void read(T &i)
{
    bool minus=false;
    char c;
    for(c=getchar_unlocked();(c<'0'||c>'9')&&(c!='-');
              c=getchar_unlocked());
    if(c=='-')
              {minus=true;c='0';}
    for(i=0;c>='0'&&c<='9';c=getchar_unlocked())
              i=(i<<3)+(i<<1)+(c-48);
    if(minus)i=(~i)+1;
}
inline void fastWrite(int a)
{
    char snum[20];
    int i=0;
    do
    {
        snum[i++]=a%10+48;
        a=a/10;
    }
    while(a!=0);
    i=i-1;
    while(i>=0)
        putchar_unlocked(snum[i--]);
    putchar_unlocked('\n');
}
const int limit = 100005;
 
vector<bool> prime(limit,true);
vector<int> primes;
void seive(){
    for(int i=2;i<limit;i++){
        if(prime[i]){
            primes.pb(i);
            for(int j=i*i;j<limit;j+=i){
                prime[j]=false;
            }
        }
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    //clock_t t1,t2;
    //t1=clock();
    //freopen("input.txt","r",stdin);//redirects standard input
    //freopen("output.txt","w",stdout);//redirects standard output
    // Sieve of Eratosthenes
    
    int i,j,inc=2,m=0;
    long long int num=100500;
    long long int root=sqrt(num)+1;
    for(i=0;i<num;i++)
        arr[i]=i;
    for(i=2;i<=root;i++)
    {
        if(arr[i]>0) 
        {
            for(j=inc*i;j<=num;j=j+i)
                arr[j]=-1;
            inc++;
        }
    }
    for(i=2;i<num;i++)
        if(arr[i]>-1)
        {
            arr1[m++]=i;
        }
    //
    int t;
    cin>>t;
    while(t--)
    {

    }
    //t2=clock();
    //float diff=((float)t2-(float)t1)/( CLOCKS_PER_SEC / 1000 ); //for milliseconds
    //float diff=((float)t2-(float)t1)/( CLOCKS_PER_SEC / 1000000 ); //for seconds
    //printf("%f\n",diff);
    return 0;
}
