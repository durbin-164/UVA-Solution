#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
   // freopen("input.txt","r",stdin);

    long double n;
    int cas=1;
    while(cin>>n)
    {
        if(n<0)break;

        long double ans = ceil(log2(n));
        printf("Case %d: ",cas++);

        cout<<fixed<<setprecision(0)<<ans<<endl;
    }


    return 0;
}



