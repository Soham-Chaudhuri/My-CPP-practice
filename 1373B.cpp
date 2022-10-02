#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c0=0;int c1=0;
        int l=s.length();bool b=false;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        while((c0>0)&&(c1>0))
        {
            //cout<<c0<<" "<<c1<<endl;
            c0--;c1--;
            b=!b;
        }
       /*while((s.find("10")!=-1)||(s.find("01")!=-1))
       {
           if((s.find("10")!=-1))
           {
               s=s.erase((s.find("10"),2));b=!b;
           }
           else if((s.find("01")!=-1))
           {
               s=s.erase((s.find("01"),2));b=!b;
           }
       }*/
       if(!b)
       {
           cout<<"NET"<<endl;
       }
       else
       {
           cout<<"DA"<<endl;
       }
    }
    return 0;
}
