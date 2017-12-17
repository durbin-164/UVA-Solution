#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    printf("PERFECTION OUTPUT\n");
    while(cin>>n)
    {
        if(n==0)break;

        int lim = sqrt(n);

        int sum=1;

        for(int i=2;i<=lim;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                int tm = n/i;
                if(tm==i)continue;
                sum+=tm;
            }
        }
        //cout<<sum<<endl;

        if(n==1)sum=0;

        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else printf("%5d  ABUNDANT\n",n);

    }
    printf("END OF OUTPUT\n");



    return 0;
}

