#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cas=1;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;

        printf("Case #%d: %d = ",cas++,n);

        int cont=1;

        for(int i=2;i<n;i++)
        {
            if(n%i==0&&cont)
            {
                cont=0;
                printf("%d * %d = ",i,n/i);

            }else if(n%i==0)
            {
                printf("%d * %d\n",i,n/i);
                break;
            }

        }


    }



    return 0;
}

