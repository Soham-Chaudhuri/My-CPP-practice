#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(stoi(s)<0)
    {
        int l=s.length();
        if(s[l-2]>(s[l-1]))
        {
            s=s.erase(l-2,1);
        }
        else
        {
            s=s.erase(l-1,1);
        }
        
    }
    cout<<stoi(s)<<endl;

    return 0;
}