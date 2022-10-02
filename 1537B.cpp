#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,i1,j1;
        cin>>n>>m>>i1>>j1;
        long long int c[4];
        long long int indx=i1+j1;
        if(indx!=2ll && indx!=n+m)
        {
            cout<<"1"<<" "<<"1"<<" ";
            cout<<n<<" "<<m<<" ";
            cout<<endl;
        }
        else if(indx!=m+1 && indx!=n+1)
        {
            cout<<"1"<<" "<<m<<" ";cout<<n<<" "<<"1"<<" ";cout<<endl;
        }
        else{
        
        
        c[0]=abs(2-indx);
        c[1]=abs(m+1-indx);
        c[2]=abs(n+1-indx);
        c[3]=abs(n+m-indx);
        int i;
        int k1,k2;
        long long int maxs1=INT_MIN; long long int maxs2=INT_MIN;
        for(i=0;i<4;i++)
        {
            if(c[i]>maxs1)
            {
                maxs1=c[i];
                k1=i;
            }
        }
        for(i=0;i<4;i++)
        {
            if(c[i]>maxs2 && i!=k1)
            {
                maxs2=c[i];
                k2=i;
            }
        }
        if(k1==0)
        {
            cout<<"1"<<" "<<"1"<<" ";
        }
        else if(k1==1)
        {
            cout<<"1"<<" "<<m<<" ";
        }
        else if(k1==2)
        {
            cout<<n<<" "<<"1"<<" ";
        }
        else
        {
            cout<<n<<" "<<m<<" ";
        }
        
        if(k2==0)
        {
            cout<<"1"<<" "<<"1"<<" ";
        }
        else if(k2==1)
        {
            cout<<"1"<<" "<<m<<" ";
        }
        else if(k2==2)
        {
            cout<<n<<" "<<"1"<<" ";
        }
        else
        {
            cout<<n<<" "<<m<<" ";
        }
        cout<<endl;
        
        }
        
        
        
    }
    return 0;
}