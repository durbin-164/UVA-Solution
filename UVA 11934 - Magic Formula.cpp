#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,l;
int fx(int x)
{
    return (a*x*x+b*x+c);
}

int main()
{

    int test;

    while(true)
    {

        cin>>a>>b>>c>>d>>l;
        if(!a&&!b&&!c&&!d&&!l)break;

        int ans=0;

        for(int i=0;i<=l;i++)
        {
            if(fx(i)%d==0)
            {
                ans++;

            }
        }

        printf("%d\n",ans);



    }

    return 0;
}

