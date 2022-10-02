#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> v1;
    vector<pair<string,string>> v2;
    int i;int j;
    for(i=0;i<n;i++)
    {
        string x,y;
        cin>>x>>y;
        v1.push_back(make_pair(x,y));
    }
    for(i=0;i<m;i++)
    {
        string x,y;
        cin>>x>>y;
        v2.push_back(make_pair(x,y));
    }
    /* for(i=0;i<m;i++)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;cout<<v2[j].first<<" "<<v2[j].second<<" "<<"#"<<v1[i].first<<endl;
    }
    */
   vector<string> v3;
   for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            string s2=(v2[j].second).substr(0,(v2[j].second).length()-1);
            string s1=v1[i].second;
            
            if(s2==s1)
            {
                cout<<v2[j].first<<" "<<v2[j].second<<" "<<"#"<<v1[i].first<<endl;
            }
        }
    }

    /*for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            string s2=(v2[j].second).substr(0,(v2[j].second).length()-1);
            string s1=v1[i].second;
            
            if(s2==s1)
            {
                v3[j]=v1[i].first;
    
            }
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<" "<<"#"<<v3[i]<<endl;
    }
    */


    
    return 0;
}