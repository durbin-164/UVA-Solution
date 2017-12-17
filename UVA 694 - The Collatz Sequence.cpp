#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL a,l,cas=1,aa;
    while(scanf("%lld%lld",&a,&l))
    {
        if(a==-1&& l==-1)break;
        aa=a;

        int term=0;

        while(true)
        {
            term++;
            if(a&1)
            {
                a=a*3+1;
            }else a=a/2;

            if(a==1||a>l)break;

        }
        if(a==1)term++;

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %d\n",cas++,aa,l,term);

    }


    return 0;
}
