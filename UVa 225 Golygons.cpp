/** Bis-Millah-ir Rahman-ir Rahim
Name: Md.Masud Rana
University: Ahsanullah University of Science and Technology
status: AC

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL; // printf("%llu",ans);
typedef pair<int,int>PII;
typedef pair<int,LL>PIL;

const double eps = 1e-9;
const int inf = 2147483647;//1<<30;///1073741824   1e9
const LL INF = 2e18;
//const LL infL = 5223372036854775807;//ULL(1)<<62;///4611686018427387904   4*1e18
//const ULL infUL = 18446744073709551615; //ULL(1)<<63;

#define fast() ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define per(i) cout<<fixed<<setprecision(i)

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)
#define mset(ara,val) memset(ara, val , sizeof(ara))

#define _rep(i,a,n,x) for(i = a; i <= n; i+=x)
#define rep(i,n) _rep(i,0,n-1,1)
#define rep1(i,n) _rep(i,1,n-1,1)
#define For(i,a,n) for(i = a;i<=n;i++)

#define SD( a ) scanf("%d",&a)
#define SD2( a,b ) SD(a),SD(b)
#define SD3( a,b,c) SD(a),SD(b),SD(c)
#define SD4( a,b,c,d) SD2(a,b),SD2(c,d)

#define SL( a ) scanf("%lld",&a)
#define SL2(a,b) SL(a),SL(b)
#define SL3(a,b,c) SL2(a,b),SL(c)

#define SI( a ) scanf("%I64d",&a)
#define SS( a ) scanf("%s",a)

#define SF( a ) scanf("%lf",&a)
#define SF2( a,b ) SF(a),SF(b)
#define SF3(a,b,c) SF(a),SF(b),SF(c)

#define SLF( a ) scanf("%Lf",&a)

#define SUL( a ) scanf("%llu",&a)
#define SUL2( a, b) SUL(a),SUL(b)

#define PF( a ) printf("%d  ",a)
#define PFL( a ) printf("%d\n",a)

#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define pr3(x,y,z) cout << x << ' ' << y << ' ' << z << endl
#define pr4(a,b,c,d) cout << a << ' ' << b << ' ' << c << ' ' << d << endl

#define all(a) a.begin(),a.end()
#define siz(a) ((int)a.size())
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))

#define MX 1000006
#define PI acos(-1)
//#define PI 3.1415926535897932385

#define pb push_back
#define ff first
#define ss second
/*
int floatCompare(double a, double b)
{
    if(fabs(a-b)<eps)return 0;//equal
    else if(a>b+eps)return 1; // a is greater than b
    else if(a+eps<b)return -1; // b is greater than a
}
*/
/*int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a%b);
}*/
/*int lcm(int a, int b) {
    return a*b/gcd(a,b);
}*/

///LL power(LL x, LL y);
///int bigmod(ULL a, ULL b, int n);
///LL modpow(LL b, LL e, LL m);
///int mod(string st,int n); //string k mod kora
/*bool mark[MX+4];
int prime[100000000];
int nprime=0;
void sive(int n);*/


/************************ Code Start***************************/

const int N =300;
const int temp=105;
const int dir[4][2] = { {1, 0}, {0, 1}, {0, -1}, {-1, 0} };
const char sign[]="ensw";

int n,ans=0;
int grid[N][N],v[N],sum[22];

void input()
{
    int k,x,y;
    SD2(n,k);
    ans=0;
    //cout<<n<<" "<<k<<endl;

    mset(grid,0);
    for(int i=0;i<k;i++)
    {
        SD2(x,y);
        if(abs(x)>temp || abs(y)>temp)continue;
        grid[x+temp][y+temp]=-1;

    }

}

bool check(int x,int y,int d,int k)
{
    for(int i=1;i<=k;i++) // x+ pop borti k porjonto kono obostacle asa ki nah check
    {
        x+=dir[d][0];
        y+=dir[d][1];

       if(abs(x)>temp || abs(y)>temp)continue;

       if(grid[x+temp][y+temp]==-1)return true;
    }

    if(abs(x)+abs(y)>sum[20]-sum[k])return true; // akhon porjont to joto kani gese ar or theke
                                                 // kom jaite parle to ar oi way te giea lav nai

   // if(abs(x)>sum[n]-sum[d]|| abs(y)>sum[n]-sum[d])return true;
    return false;

}

void dfs(int x,int y,int d ,int f)
{

    if(d>n)
    {
        if(x==0 && y==0)
        {
            for(int i=1;i<=n;i++)printf("%c",sign[v[i]]);
            puts("");
            ans++;
        }
        return ;
    }

    for(int  i=0;i<4;i++)
    {
        if(i==f || i+f==3)continue;

        if(check(x,y,i,d))continue;


        int p = x+dir[i][0]*d; //x+next d step .. d dap porjonto jabe
        int q = y+dir[i][1]*d;


        //if(grid[p+temp][q+temp]==-1)continue;
        if(grid[p+temp][q+temp])continue;

        grid[p+temp][q+temp]=1;

        v[d]=i;

        dfs(p,q,d+1,i);

        grid[p+temp][q+temp]=0;


    }
}

int main()
{
   // FI;
    fast();
    sum[0]=0;

    for(int i=1;i<=20;i++)sum[i]=sum[i-1]+i;

    int test,cas=1;
    SD(test);
    while(test--)
    {
        input();
        dfs(0,0,1,-1);

        printf("Found %d golygon(s).\n\n", ans);
    }

    return 0;
}


/*


LL power(LL x, LL y)
{
    if(y <= 0) return 1;
    LL res = 1;
    while(y > 0)
    {
        if(y&1)res = res * x;
        x = x*x;
        y >>=1;
    }
    return res;
}
*/

/*
int bigmod(ULL a, ULL b, int n) {
    if (b == 0) return 1 % n;
    int x = bigmod(a, b/2, n);
    x = (x*x) % n;
    if(b&1) x = (x * (a%n)) % n;
    return x;
}*/

/*
LL modpow(LL b, LL e, LL m)
{
    LL res=1;
    while (e>0)
    {
        if(e&1)res=(res*b)%m;
        e >>= 1; b=(b*b)%m;
    }
    return res;
}

*/
/*
int mod(string st,int n)
{
    int ans=0;
    for(auto x:st)
    {
        ans=((ans*10+x-48))%n;
    }

    return ans;
}*/

/*
void sive(int n)
{
   // int n = mx;
    int limit = sqrt(n*1.0)+2;
    mark[0]=true;  mark[1]=true;
    for(int i=4;i<=n;i+=2) mark[i]=true;
    prime[nprime++]=2;
    for(int i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit)
                for(int j=i*i;j<=n;j+=i*2) mark[j]=true;
        }
    }
}
*/


















