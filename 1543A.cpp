#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    while(y!=0)
    {
        int rem=x%y;
        x=y;
        y=rem;

    }
    return x;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ex,op=0;
        ex=abs(a-b);
        if(ex==0){
            cout<<ex<<" "<<op<<endl;
        }
        else{
        op=min(b%ex,ex-b%ex);
        cout<<ex<<" "<<op<<endl;
        }
        /*
        if(a<b)
        {
            while(!(gcd(a,b)==ex))
            {
                int g=gcd(a,b);
                op+=g;
                a-=g;
                b-=g;
                
            }
            cout<<ex<<" "<<op<<endl;
        }
        else if(a>b)
        {
            while(!(gcd(a,b)==ex))
            {
                int g=gcd(a,b);
                op+=g;
                a+=g;
                b+=g;
                //cout<<a<<" "<<b<<endl;
            }
            cout<<ex<<" "<<op<<endl;
        }
        else
        {
            cout<<ex<<" "<<op<<endl;
        }
        */
    }
    return 0;
}