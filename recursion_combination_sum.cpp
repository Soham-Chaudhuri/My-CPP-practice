#include<bits/stdc++.h>
using namespace std;
void loop(int indx,int sum,vector<int> v,int arr[],vector<vector<int>> ds)
{
    if(indx==(sizeof(arr)/sizeof(arr[0])))

    {
        if(sum==0)
        {
            ds.push_back(v);
        }
        return ;

    }
    
    if(arr[indx]<=sum){
    v.push_back(arr[indx]);
    loop(indx,sum-arr[indx],v,arr,ds);
    v.pop_back();
    }
    
    
    loop(indx+1,sum,v,arr,ds);
}





int main(){
    int a[]={2,3,6,7};
    vector<int> v1;
    vector<vector<int>> ds1;
    loop(0,7,v1,a,ds1);
    for(int i=0;i<ds1.size();i++)
    {
        cout<<ds1[i]<<endl;
    }
    return 0;
}