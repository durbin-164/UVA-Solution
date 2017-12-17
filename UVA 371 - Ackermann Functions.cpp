#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

LL func(LL n)
{
    if(n==1)return 3;
    LL ans =0;
    while(n>1)
    {
        if(n&1)
        {
            n=3*n+1;
        }
        else
        {
            n/=2;
        }
        ans++;

    }
    return ans;
}

int main()
{
    //freopen("input.txt","r",stdin);
    LL hi,lo;


    while(cin>>lo>>hi)
    {
        LL mx =0;
        if(lo==0 && hi==0)break;

        if(hi<lo)swap(hi,lo);

        LL ans=0;
        for(LL i=lo; i<=hi; i++)
        {
            LL tm = func(i);
            if(mx<tm)
            {
                mx = tm;
                ans =i;
            }


        }
        //cout<<mx<<" "<<ans<<endl;
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",lo,hi,ans,mx);

    }





    return 0;
}

