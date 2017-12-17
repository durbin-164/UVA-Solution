#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef pair<ULL,ULL>PII;
#define mx 1000000000
vector<PII>v;
map<int,PII>mp;

int main()
{
    //freopen("input.txt","r",stdin);


   ULL n;

    while(scanf("%llu",&n)!=EOF)
    {
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        ULL last = (n*(n+2))/2;
        ULL ans=last*3-6; //ans = last+(last-2)+(last-4)
        printf("%llu\n",ans);
    }


    return 0;
}


