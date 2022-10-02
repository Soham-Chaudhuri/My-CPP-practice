#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,n;
        cin>>A>>B>>n;
        long long int a[n];
        long long int b[n];
        long long int sa=0;
        long long int sb=0;
        int p=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];sa+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];sb+=b[i];
        }
        int i=0;
        while(B>0 && i<n)
        {
            //b[i]/=A;//cout<<b[i]<<endl;
            
            B=B-(b[i]/A)*a[i];//cout<<B<<endl;
            //sb=sb-(n*A);
            p++;i++;
            
            
            
        }
        if(p==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}