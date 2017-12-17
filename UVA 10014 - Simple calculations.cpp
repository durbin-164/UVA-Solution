#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        double ao,an,x;
        cin>>ao>>an;

        vector<double>v;

        int div=n*2;
        double totc=0;

        for(int i=0;i<n;i++)
        {
           scanf("%lf",&x);
           totc+=x*div;
           div-=2;

        }

        double ans = ((n*ao+an)-totc)/(n+1);

        printf("%.2f\n",ans);
        if(test)puts("");


    }

    return 0;
}


