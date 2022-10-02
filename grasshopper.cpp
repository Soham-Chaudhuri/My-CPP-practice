#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,n;int i;
        cin>>x>>n;long long int ans=0;
        if(n%4==0)
        {
            ans=0;
        }
        else{
            if(n%4==1)
            {
                ans=-n;
            }
            if(n%4==2)
            {
                ans=1;
            }
            if(n%4==3)
            {
                ans=n+1;
            }
            if(x%2)
            {
                ans=-ans;
            }
        }

        cout<<(x+ans)<<endl;
    }

    return 0;

}
