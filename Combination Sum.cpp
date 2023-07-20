#include<bits/stdc++.h> 
using namespace std; 
class Solution {
public:
int n;
     void solve(int idx ,vector<int>&candy , int t,vector<int>&subset,vector<vector<int>>&ans)
     {
         if(t==0){
         ans.push_back(subset);
         return ;}
         int i;
         for(i=idx;i<n;i++)
         {
             if(i!=idx && candy[i]==candy[i-1])
             continue;
             if(t-candy[i]<0)
             return;
             int diff=t-candy[i];
             subset.push_back(candy[i]);
             solve(i,candy,diff,subset,ans);
             subset.pop_back();
         }
     }
    vector<vector<int>> combinationSum(vector<int>& candy, int t) {
         int i,j,k;
         n=candy.size();
         sort(candy.begin(),candy.end());
         vector<int>subset;
         vector<vector<int>>ans;
          solve(0,candy,t,subset,ans);
          return ans;
    }
};