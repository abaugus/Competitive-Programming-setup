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
#define dout(n) printf("%d\n",n)
#define sl(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define sortv(a) sort(a.begin(),a.end())
#define test()  int t; cin>>t; while(t--)
#define fi first
#define se second
#define el "\n"
#define ll long long
#define ull unsigned ll
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
//FILE *fin = freopen("input.txt","r",stdin);
//FILE *fout = freopen("output.txt","w",stdout);
 
#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

 
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;
 
#define MAXN 100005

int main()
{
    
    return 0;
} 
