#include<bits/stdc++.h>
using namespace std;
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
inline void fastWrite(int a)
{
    char snum[20];
    int i=0;
    do
    {
        snum[i++]=a%10+48;
        a=a/10;
    }while(a!=0);
    i=i-1;
    while(i>=0)
    putchar_unlocked(snum[i--]);
    putchar_unlocked('\n');
}
int main()
{
    return 0;
}
