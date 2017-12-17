#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    while(cin>>n ,n)
    {

        n++;

        int ans =0;
        while(n>2)
        {
            int tem = n/3;
            n=n%3;
            n+=tem;
            ans+=tem;
        }
        cout<<ans<<endl;

    }

    return 0;
}

