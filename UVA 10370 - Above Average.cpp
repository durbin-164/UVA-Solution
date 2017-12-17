#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,x,sum=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            v.push_back(x);
            sum+=x;
        }

        int av=sum/n;
        int cont=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]>av)cont++;
        }

        double ans =(double) ((double)cont/n)*100.00;

        printf("%.3f%\n",ans);



    }



    return 0;
}

