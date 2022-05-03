// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  //USING BFS
  
    bool cycle(vector<int> &vis, vector<int> adj[], int node, int &V)
    {
        queue<int> q;
        q.push(node);
        
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            if(vis[temp]==1)
               return true;
            else
            {
                vis[temp]=1;
                for(auto i:adj[temp])
                {
                    if(vis[i]!=1)
                    {
                        q.push(i);
                    }
                }
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V+1,0);
        for(int j=1;j<V;j++)
        {
            if(vis[j]!=1)
                if (cycle(vis,adj,j,V))return 1;
        }
        return 0;
    }
};

//  USING DFS
//      bool cycle(vector<int> &vis, vector<int> adj[], int node, int parent)
//     {
//         vis[node]=1;
//         for(auto i:adj[node])
//         {
//             if(vis[i]!=1)
//                 cycle(vis,adj,i,node);
//             else if(i!=parent)
//                 return true;
//         }
//         return false;
//     }
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V+1,0);
//         for(int j=1;j<V;j++)
//         {
//             if(vis[j]!=1)
//                 if(cycle(vis,adj,j,-1))return 1;
//         }
//         return 0;
//     }
// };

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends