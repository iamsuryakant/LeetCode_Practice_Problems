// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool isbip(int node, vector<int>adj[], vector<bool>&visited, vector<int>&color){
        visited[node] = true;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                color[it] = !color[node];
                
                if(!isbip(it, adj, visited, color))
                    return false;
            }else{
                if(node != it && color[node] == color[it]){
                    return false;
                }
            }
        }
        
        return true;
        
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<bool>visited(V, 0);
	    vector<int> color(V, 0);
	    
	    for(int i = 0; i<V; i++)
	    {
	        if(!visited[i]){
	            if(!isbip(i, adj, visited, color))
	                return false;
	        }
	    }
	    
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends