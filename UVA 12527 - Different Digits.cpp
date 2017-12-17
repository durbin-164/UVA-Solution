#include<bits/stdc++.h>
using namespace std;

bool func(int n)
{
    int cont=0;
    set<int>s;
    while(n>0)
    {
        s.insert(n%10);
        n/=10;
        cont++;
    }



   return cont==s.size()?true:false;
}
int ara[5009];
int main()
{

    ara[0]=1;

    for(int i=1;i<5006;i++)
    {
        if(func(i))
        {
           ara[i]=ara[i-1]+1;
        }else ara[i]=ara[i-1];

    }


    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)swap(a,b);

        int ans = abs(ara[b]-ara[a-1]);

        cout<<ans<<endl;

    }

    return 0;
}

