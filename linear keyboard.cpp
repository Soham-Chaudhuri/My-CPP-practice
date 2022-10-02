#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        int l;cin.ignore();
        string s2;
        cin>>s2;
        int j=0;
        int s=0;
        cin.ignore();
        l=s2.length();int a[l];
        for(int i=0;i<l;i++)
        {
            string s3=s2.substr(i,1);
            a[j]=s1.find(s3);
            j++;

        }
        for(int i=0;i<j-1;i++)
        {
            s+=abs(a[i+1]-a[i]);
        }
        cout<<s<<endl;


    }
    return 0;
}