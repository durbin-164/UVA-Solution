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

vector<int>grid[26];
int used[26];
int node[26],subans[26],ans[26],indx[26];
int min_band=0,n=0;


void dfs(int att)
{

    if(att==n)
    {
        int max_band=0;

        for(int i=0; i<n; i++)
        {
            for(auto x: grid[node[i]])
            {
                int dif = abs( indx[ node[i] ] - indx[x]); // node[i] ar sate connect x node ar distance

                max_band= max(max_band,dif);
            }
        }

        if(max_band<min_band)
        {
            for(int i=0; i<n; i++)ans[i]=subans[i];
            min_band= max_band;

        }

        return;

    }

    for(int i=0; i<n; i++)
    {
        if(used[i]==0)
        {
            used[i]=1;

            subans[att]=node[i];//sub charecter ans
            indx[node[i]]=att;//for finding Bandwidth

            dfs(att+1);
            used[i]=0;
        }
    }
}

int main()
{
    //FI;
    fast();


    int test,cas=1;
    string st;
    while(cin>>st && st!="#")
    {
        min_band= inf;
        n=0;
        mset(grid,0);
        mset(used,0);

        for(int i=0; i<siz(st); i++)
        {
            int xx = st[i]-'A';
           // printf("%c",xx+'A');


            if(used[xx]==0)
            {
                used[xx]=1;
                node[n++]=xx;

            }

            int j=i+2;
            while(st[j]!=';'&&st[j])
            {
                int yy = st[j]-'A';
                grid[xx].pb(yy);

                if(!used[yy])
                {
                    used[yy]=1;
                    node[n++]=yy;
                }
                j++;
            }
            i=j;

        }

        sort(node,node+n);
        mset(used,0);
        dfs(0);

        for(int i=0;i<n;i++)
        {
            printf("%c ",ans[i]+'A');

        }

        printf("-> %d\n",min_band);


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


















