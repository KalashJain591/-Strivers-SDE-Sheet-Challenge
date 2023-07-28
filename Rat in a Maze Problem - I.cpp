//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
     vector<string>v1;
     int n;
     int a[4]={1,-1,0,0};
     int b[4]={0,0,1,-1};
     string s="DURL";
     
    bool check (int x, int y){
        return !(x<0 || y<0 ||  x==n || y==n);
        
    }
    
    void solve(int x, int y, string temp,vector<vector<int>>&m){
        if(x==n-1 && y==n-1){
        v1.push_back(temp);
        return ;}
        if(!check(x,y)||m[x][y]!=1)
        return ;
        m[x][y]=-1;
        int i;
        for(i=0;i<4;i++){
            temp.push_back(s[i]);
            solve(x+a[i],y+b[i],temp,m);
            temp.pop_back();
        }
        m[x][y]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int N) {
       
        string temp;
        n=N;
        if(m[n-1][n-1]==0)
        return v1;
        solve(0,0,temp,m);
        return v1;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends