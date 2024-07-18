// https://takeuforward.org/data-structure/prims-algorithm-minimum-spanning-tree-c-and-java-g-45/
#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    // Time = O(E*logE)+O(E*logE) ~ O(E*logE)
    // Space = O(E)+O(V)
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;//weight,node
        
        
        pq.push({0,0});
        
        vector<int>vis(V,0);
        
        int cnt=0;
        
        while(pq.size()>0){
            auto cur=pq.top();
            pq.pop();
            
            int node=cur.second;
            
            if(vis[node]){
                continue;
            }
            
            
            
            
            vis[node]=1;
            cnt+=cur.first;
            
            for(auto brr:adj[node]){
                if(vis[brr[0]]==0){
                    pq.push({brr[1],brr[0]});
                }
            }
        }
        
        return cnt;
        
        
        
    }
};






int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


