#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        a+=b;

        int ans =0;
        while(a>=c)
        {
            int tem = a/c;
            a=a%c;
            a+=tem;
            ans+=tem;
        }
        cout<<ans<<endl;

    }

    return 0;
}
