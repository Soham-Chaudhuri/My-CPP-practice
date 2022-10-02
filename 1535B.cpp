#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    vector <int> odd;
    vector <int> even;
    vector <int> vv;
    int i,j,t,n,val,res,temp;
    cin >> t;
 
    while(t--){
        res = 0;
        cin >> n;
        for(i = 0;i<n;i++){
            cin >> val;
            if(val%2 == 0) even.push_back(val);
            else odd.push_back(val);
        }  for(i = 0;i<even.size();i++) vv.push_back(even[i]);
           for(i = 0;i<odd.size();i++) vv.push_back(odd[i]);
           for(i = 0;i<vv.size();i++){
               for(j = i+1;j<vv.size();j++){
                   temp = __gcd(vv[i],2*vv[j]);
                   if(temp>1) res++;
               }
           }     cout << res << endl;
                 vv.clear();
                 odd.clear();
                 even.clear();
    }
 
    return 0;
}