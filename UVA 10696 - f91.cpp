#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n<=100)return func(func(n+11));

    return n-10;

}

int main()
{

    /*for(int i=0;i<1000;i++)
    {
        cout<<i<<" : "<<func(i)<<endl;
    }*/

    int n;
    while(scanf("%d",&n),n)
    {
        printf("f91(%d) = ",n);
        if(n<=101)printf("91\n");
        else{

            printf("%d\n",n-10);
        }


    }

    return 0;
}

