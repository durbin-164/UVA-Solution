#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;

#define MX 1000001
bool ara[MX];

LL generator()
{
    int sum=0,x;
    for(int i=0; i<MX; i++)
    {
        sum=i;
        x=i;
        while(x>0)
        {
            sum+=x%10;
            x/=10;
        }
        //cout<<sum<<endl;
        if(sum<MX)ara[sum]=1;

    }


}

int main()
{
    generator();
    for(int i=1; i<MX; i++)
    {
        if(ara[i]==0)
            printf("%d\n",i);
    }


    return 0;
}
