#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n+1];
        int i,j,p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for(i=0;i<=n;i++)
        {
            b[i]=0;
        }
        for(i=0;i<n;i++)
        {
            b[abs(a[i])]++;
        }
        for(i=0;i<=n;i++)
        {
            
            if(i==0)
            {
                if(b[i]>1)
                {
                    p+=1;
                }

            }
            else{
                if(b[i]>2)
                {
                    p+=2;
                }
                else
                {
                    p+=b[i];
                }
            }
        }
        cout<<p<<endl;
        

      
    }
    return 0;
}