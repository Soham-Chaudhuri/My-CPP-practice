#include<bits/stdc++.h>
using namespace std;
void pattern(int x,int ans)
{
    if(ans<=0)
    {
        cout<<ans<<",";
        return ;
    }
    cout<<ans<<",";
    pattern(x,ans-5);
    if(ans==x)
    {
        cout<<ans;
    }
    else
    {
        cout<<ans<<",";
    }
    
    return ;


}


int main(){
    int t;
    cin>>t;
    pattern(t,t);

    return 0;
}