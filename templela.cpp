#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i;bool b=false;
        if(n%2!=0){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int p=1;int i=0;
        while ((p>=0)||(p==a[i]))
        {
            if(p==0)
            {
                b=true;break;
            }
            else if(i<(n/2)+1)
            {
                i++;
                p++;
            }
            else if(i>=(n/2)+1)
            {
                i++;
                p--;
            }
            else if(p!=a[i])
            {
                break;
            }
        }
        }
        
        
        
        
        
        /*for(i=0;i<(n/2)+1;i++)
        {  cout<<p<<"\n";
            if(p!=a[i])
            {
                b=false;break;
            }
            p++;
        }
        p-=2;
        for(;i<n;i++)
        {
            
            
            if((p!=a[i])&&(b))
            {
                b=false;
                break;
            }cout<<p<<"\n";
            p--;
        }


    }
    else{
        b=false;
    }*/
        if(b)
        {
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
    return 0;
}