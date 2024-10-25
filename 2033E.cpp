#include<bits/stdc++.h>
using namespace std;
class DisjointsetUnion
{
public:
    vector<int> rank, size, parent;

    DisjointsetUnion(int n)
    {
        rank.resize(n + 1);
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
            rank[i] = 1;
        }
    }

    int findUltimateParent(int u)
    {
        if (parent[u] == u)
            return u;
        return parent[u] = findUltimateParent(parent[u]);
    }

    void unionByRank(int u, int v)
    {
        int ultimateParent_u = findUltimateParent(u);
        int ultimateParent_v = findUltimateParent(v);
        if (ultimateParent_u == ultimateParent_v)
            return;

        if (rank[ultimateParent_u] > rank[ultimateParent_v])
        {
            parent[ultimateParent_v] = ultimateParent_u;
        }
        else if (rank[ultimateParent_u] < rank[ultimateParent_v])
        {
            parent[ultimateParent_u] = ultimateParent_v;
        }
        else
        {
            parent[ultimateParent_u] = ultimateParent_v;
            rank[ultimateParent_v]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ultimateParent_u = findUltimateParent(u);
        int ultimateParent_v = findUltimateParent(v);
        if (ultimateParent_u == ultimateParent_v)
            return;
        if (size[ultimateParent_u] > size[ultimateParent_v])
        {
            parent[ultimateParent_v] = ultimateParent_u;
            size[ultimateParent_u] += size[ultimateParent_v];
        }
        else
        {
            parent[ultimateParent_u] = ultimateParent_v;
            size[ultimateParent_v] += size[ultimateParent_u];
        }
    }
};
void f(){
    long long int n;
    cin>>n;
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    DisjointsetUnion dsu(n);
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<v[i]<<endl;
        if(v[i]!=(i)&&v[v[i]]!=(i))
        dsu.unionBySize(v[i],(i));
    }
    unordered_map<long long int,long long int> mp;
    for(int i=1;i<=n;i++){
        // cout<<i<<"->"<<dsu.parent[i]<<"\n";
    }
    for(int i=1;i<=n;i++){
        mp[dsu.parent[i]]++;
    }

    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        // YOUR CODE GOES HERE
        // PAY ATTENTION BEFORE TAKING UNSIGNED OR SIGNED
        f();
    }
    return 0;
}