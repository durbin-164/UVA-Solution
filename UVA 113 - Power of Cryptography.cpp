#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
   // freopen("input.txt","r",stdin);

    long double n,p;
    while(cin>>n>>p)
    {
       // cout<<n<<" "<<p<<endl;
        long double ans = exp(log(p)/n); // log = ln,&& exp= invers ln

        cout<<fixed<<setprecision(0)<<ans<<endl;
    }


    return 0;
}


