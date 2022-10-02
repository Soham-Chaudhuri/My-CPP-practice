#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    string s;
    cin>>s;
    int cnt[l-1];
    for(int i=0;i<l-1;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<l-1;i++)
    {
        string str=s.substr(i,2);
        for(int j=i;j<l-1;j++)
        {
            string st=s.substr(j,2);
            if(str.compare(st)==0)
            {
                cnt[i]++;
            }
        }
    }
    int max=0;int maxI=0;
    for(int i=0;i<l-1;i++)
    {
        if(cnt[i]>max)
        {
            max=cnt[i];
            maxI=i;
        }
    }
    cout<<s.substr(maxI,2);
    return 0;
}