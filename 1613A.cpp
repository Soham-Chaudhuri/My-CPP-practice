#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>c;
        cin>>b>>d;
        int mins=min(c,d);
        c-=mins;
        d-=mins;
        if (c >= 7)
			cout << ">" << endl;
		else if (d >= 7)
			cout << "<" << endl;
            else
        {
        c=ceil(pow(10,c));
        d=ceil(pow(10,d));
        a=a*c;
        b=b*d;
        //cout<<a<<endl;
        //cout<<b<<endl;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
        }
        //cout<<c<<endl;
        //cout<<d<<endl;
        
        
    }
    return 0;
}