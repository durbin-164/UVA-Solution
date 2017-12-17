#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    queue<int>q;
    for(int i=1;i<=n;i++)q.push(i);
    while(q.size()>1)
    {
        q.pop();
        q.push(q.front());
        q.pop();


    }

    return q.front();
}

int ara[500009];

int main()
{



   /* for(int i=1;i<=200;i++)
    {
        cout<<i<<" : "<<func(i)<<endl;
    }*/

    ara[1]=1;
    ara[2]=2;

    int tack=2;
    int div=4;

    for(int i=3;i<500006;i++)
    {
        ara[i]=tack;
        tack+=2;
        if(i==div)
        {
            tack=2;
            div*=2;
        }


    }
    /*cout<<"***************"<<endl;

    for(int i=1;i<=200;i++)
    {
        cout<<i<<" : "<<ara[i]<<endl;
    }*/



    int test;
    int n;

    while(scanf("%d",&n),n)
    {
        printf("%d\n",ara[n]);

    }

    return 0;
}

