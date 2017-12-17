#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    while(cin>>n)
    {
        int sum=n;
        n+=1;

        while(n>2)
        {
            int tm=n/3;
            sum+=tm;
            n=n%3;
            n+=tm;
           // cout<<n<<"  "<<sum<<endl;

        }
        cout<<sum<<endl;
    }



    return 0;
}

