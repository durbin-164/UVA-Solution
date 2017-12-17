#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cas=1;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        if(b<a)swap(a,b);

        if(a%2==0)a+=1;
        int cont=0;

        while(a<=b)
        {
            cont+=a;
            a+=2;

        }
        printf("Case %d: %d\n",cas++,cont);
    }


    return 0;
}

