#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    //freopen("input.txt","r",stdin);
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n>m)swap(n,m);

        int ans=n-1;
         ans+=(m-1)*n;
        printf("%d\n",ans);

    }


    return 0;
}

