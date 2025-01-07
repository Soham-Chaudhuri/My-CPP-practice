#include<bits/stdc++.h>
using namespace std;

class FenwickTree{
    private:
        int n;
        vector<int> bits;
    public:
        FenwickTree(int size){
            this->n=size;
            bits = vector<int> (n+1,0);
        }
        void update(int idx,int val){
            while(idx<=n){
                bits[idx]+=val;
                idx+=(idx&-idx);
            }
        }
        void range_update(int left,int right,int val){
            update(left,val);
            update(right+1,-val);
        }
        int query(int idx){
            int sum = 0;
            while(idx>0){
                sum+=bits[idx];
                idx-=(idx&-idx);
            }
            return sum;
        }
};


// int main(){
//     int n,q;
//     cin>>n>>q;
//     vector<int> nums(n);
//     vector<vector<int>> queries(q,vector<int>(3,0));
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     for(int i=0;i<q;i++){
//         cin>>queries[i][0]>>queries[i][1]>>queries[i][2];
//     }

//     FenwickTree ft(n,nums);
//     for(int i=0;i<q;i++){
//         if(queries[i][0]==1){
//             int idx = queries[i][1];
//             int val = queries[i][2];
//             ft.update(idx+1,val-nums[idx]);
//             nums[idx] = val;
//         }
//         else{
//             int left = queries[i][1];
//             int right = queries[i][2];
//             cout<<ft.query(right+1)-ft.query(left)<<endl;
//         }
//     }

//     return 0;
// }
