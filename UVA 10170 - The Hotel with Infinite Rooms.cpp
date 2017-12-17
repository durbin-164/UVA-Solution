#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MX 1000000000
LL a;
LL func(LL n)
{

    return ((n*n+n)/2)-((a*a+a)/2);

}

int main()
{
    //freopen("input.txt","r",stdin);
    LL d;
    while(cin>>a>>d)
    {
        a--;
        LL ans=MX+2,lo=1,hi=MX,mid;
        while(lo<=hi)
        {
            LL mid = (hi+lo)/2;

            LL temp = func(mid);
            //cout<<lo<<" "<<hi<<" "<<temp<<"  "<<mid<<endl;

            if(temp>=d)
            {
                ans = min(ans,mid);
                //ans=mid;
                hi=mid-1;
            }else{
                lo = mid+1;

            }
           // cout<<ans<<"  "<<temp<<"  "<<mid<<"  "<<d<<endl;

        }
        printf("%lld\n",max(ans,a));
        //cout<<ans<<endl;
    }



    return 0;
}
