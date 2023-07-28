#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
unordered_set<int>col,sum,diff;
int n;
    void solve(int r,vector<vector<string>>&ans,vector<string>&temp,vector<vector<int>>&hash){
        if(r==n)
        {
            ans.push_back(temp);
        }
        int i;
        for(i=0;i<n;i++){
            if(!(hash[0][i]||hash[1][i+r]||hash[2][i-r+n]))
            {
                temp[r][i]='Q';
                
                hash[0][i]=1;
                hash[1][i+r]=1;
                hash[2][i-r+n]=1;
                solve(r+1,ans,temp,hash);
                temp[r][i] = '.';
                
                hash[0][i]=0;
                hash[1][i+r]=0;
                hash[2][i-r+n]=0;
            }
            
        }

    }
    vector<vector<string>> solveNQueens(int N) {
        int i,j,k;
        n=N;
        vector<vector<string>>ans;
        vector<string>temp(n,string(n,'.'));
        vector<vector<int>>hash(3,vector<int>(2*n+1,0));
        solve(0,ans,temp,hash);
        return ans;
    }
};