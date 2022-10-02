#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        string s;
        cin>>s;
        if(n>2)
        {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<s.substr(0,1)<<" "<<s.substr(1)<<endl;  
        }
        else if(s[0]<s[n-1])
        {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<s.substr(0,1)<<" "<<s.substr(1)<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        /*
        int m=n/2;
        bool b=false;
        while(m>0)
        {
            int x=stoi(s.substr(0,m));
            int y=stoi(s.substr(m));
            
            if(x<y)
            {
                b=true;
                break;
            }
            m=m-1;
        }
    if(b)
    {
        cout<<"YES"<<endl;
        cout<<"2"<<endl;
        cout<<s.substr(0,m)<<" "<<s.substr(m)<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
        
    }
    */
    }


    return 0;
}