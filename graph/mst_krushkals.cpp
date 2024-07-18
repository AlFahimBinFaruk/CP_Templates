// https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1
class DSU{
    int *parent;
    int *rank;

    public:
        DSU(int n){
            parent=new int[n];
            rank=new int[n];

            for(int i=0;i<n;i++){
                parent[i]=-1;
                rank[i]=1;
            }
        }


        int find(int i){
            if(parent[i]==-1){
                return i;
            }
            //when we are connection two nodes means we are connection their parents.
            return parent[i]=find(parent[i]);
        }

        bool unite(int x,int y){
            int s1=find(x);
            int s2=find(y);

            if(s1!=s2){

                if(rank[s1]>rank[s2]){
                    parent[s2]=s1;
                }else if(rank[s1]<rank[s2]){
                    parent[s1]=s2;
                }else{
                    parent[s2]=s1;
                    rank[s1]++;
                }

                return true;

            }
            return false;


        }

};

class Solution
{
	public:
	// Time = O(E*logE)+O(E*logV) = O(E*logE) or O(E*logV)
	// Space = O(E) + O(N)
	int spanningTree(int V, vector<vector<int>> adj[]){
	
	        DSU dsu(V);
	
	        vector<vector<int>>arr;
	
	        for(int i=0;i<V;i++){
	            for(auto brr:adj[i]){
	                vector<int>temp;
	                temp.push_back(brr[1]);
	                temp.push_back(i);
	                temp.push_back(brr[0]);
	                arr.push_back(temp);
	            }
	        }
	        sort(arr.begin(),arr.end());
	        
	        int cnt=0;
	
	        // conection more than v-1 edge will ultimately result in cycle so no need to check separetely.
	        for(int i=0;i<arr.size();i++){
	            int w=arr[i][0],a=arr[i][1],b=arr[i][2];
	
	            // if(dsu.find(a)!=dsu.find(b)){
	            //     dsu.unite(a,b);
	            //     cnt+=w;
	            // }
	            if(dsu.unite(a,b)){
	                cnt+=w;
	            }
	        }
	
	        return cnt;
	};
    
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
