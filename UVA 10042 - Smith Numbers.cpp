#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;

#define MX 100

LL digit(LL n)
{
    LL sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;

    }
    return sum;
}

bool loopPhi(LL n)
{
    LL dig1 = digit(n);
    bool prime=1;
    LL dig2=0;

    for(LL i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cont=0;
            while(n%i==0)
            {
                cont++;
                n/=i;
            }
            dig2+=cont*digit(i);
            prime=0;

        }
    }

    if(n!=1)
    {
       dig2+=digit(n);
    }

    if(dig1==dig2&&prime==0)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int test;
    scanf("%d",&test);
    while(test--)
    {
        LL n;
        scanf("%lld",&n);


        while(true)
        {
            n++;
            if(loopPhi(n))
            {
                printf("%lld\n",n);
                break;
            }
        }
    }




    return 0;
}


