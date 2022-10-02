/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> c;
        vector<int> a;
        int i;
        for(i=0;i<3;i++)
        {
            int x;
            cin>>x;
            c.push_back(x);
        }
        for(i=0;i<5;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        bool b=true;
        for(i=0;i<3;i++)
        {
            c[i]-=a[i];
            if(c[i]<0)
            {
                b=false;
                break;
            }
        }
        //cout<<b<<endl;
        if(b){
        int x,y;
        x=a[3]-c[0];
        y=a[4]-c[1];
        //cout<<x<<endl;
        //cout<<y<<endl;
        if((x+y)>c[2] || x<0 || y<0)
        {
            b=false;//cout<<"YO"<<endl;
            
        }
        
        }
        if(b)
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
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    vector<int> v(3,0);
    int i,pole=1;
    for(i=0;i<3;i++){
        cin>>v[i];
    }
    vector<int> d(5,0);
    for(i=0;i<5;i++){
        cin>>d[i];
    }
    if(d[0] > v[0] || d[1] > v[1]) pole=0;
    else {
        int p=v[0]-d[0];
        if(d[3]>=p)
        d[3]=d[3]-p;
        else d[3]=0;
        p=v[1]-d[1];
        if(d[4]>=p)
        d[4]=d[4]-p;
        else d[4]=0;
        if(d[2]+d[3]+d[4] > v[2]) pole=0;
    }
    if (pole==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
    return 0;
}