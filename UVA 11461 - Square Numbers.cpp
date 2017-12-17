#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define mx 100009
bool visit[mx];
int ara[mx];
int main()
{
    //freopen("input.txt","r",stdin);

    int nn=4;
    int i=2;
    visit[1]=1;

    while(nn<mx)
    {
        visit[nn]=1;
        i++;
        nn=i*i;

    }

    for(i=1;i<mx;i++)
    {
        ara[i]=ara[i-1]+visit[i];
    }

    int n,m;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0 &&m==0)break;
        int ans = ara[m]-ara[n-1];
        printf("%d\n",ans);

    }


    return 0;
}


