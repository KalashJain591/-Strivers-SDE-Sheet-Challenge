//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
   bool isvalid (int color , int idx ,vector<int>&col,bool graph[101][101],int n){
        int i,j,k;
        for(i=0;i<n;i++){
            if(graph[idx][i] && col[i]==color)
            return false;
        }
        return true;
    }
    
    bool solve(int m,int idx, bool graph[101][101] ,int n, vector<int>&col)
    {
        if(idx==n)
        return true;
        int i,j;
        for(i=1;i<=m;i++){
            if(isvalid(i,idx,col,graph,n))
            {
                col[idx]=i;
                if(solve(m,idx+1, graph,n,col))
                return true;
                col[idx]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int>col(n);
     return solve(m,0,graph,n,col);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends