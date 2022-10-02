#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();string a="0000000";string b="1111111";
    int i;int z=0;int o=0;int p=0;
    for(i=0;i<l;i++)
    {
        char ch=s.at(i);
        if((ch=='0')||(ch=='1'))
        {
            z=i;
        }

        if(strcmp(s.substr(i,i+7),a) == 0)
        {
            cout<<"YES";
        }
    
    
    }    

    return 0;
}