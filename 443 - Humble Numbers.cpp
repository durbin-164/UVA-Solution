#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MX 1000000000
LL ara[5849];

int main()
{
    //freopen("input.txt","r",stdin);

    ara[1]=1;

    set<LL>s={2,3,5,7};
    set<LL>::iterator it;
    for(int i=2;i<=5845;i++)
    {
        it=s.begin();
        ara[i]=*it;


        s.insert(*it*2);
        s.insert(*it*3);
        s.insert(*it*5);
        s.insert(*it*7);
        s.erase(it);



    }

    int n;
    while(scanf("%d",&n),n)
    {
       // printf("%lld\n",ara[n]);
        //The 1st humble number is 1.
        printf("The %d",n);

        string st="";


        if(n%10==1&&(n/10)%10!=1)st="st";
        else if(n%10==2&&(n/10)%10!=1)st="nd";
        else if(n%10==3&&(n/10)%10!=1)st="rd";
        else st="th";

        printf("%s",st.c_str());
        printf(" humble number is %lld.\n",ara[n]);


    }



    return 0;
}

