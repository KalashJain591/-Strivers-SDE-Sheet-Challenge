#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int n;
    void solve(int idx, vector<int>&candy,vector<int>&temp,vector<vector<int>>&ans,int t)
    {
        if(t==0){
        ans.push_back(temp);
        return ;}
        if(idx==n)
        return ;
         int i;
        for(i=idx;i<n;i++){
            if(i!=idx && candy[i]==candy[i-1])
            continue;
            int diff=t-candy[i];
            if(diff<0)
            return ;
            temp.push_back(candy[i]);
            solve(i+1,candy,temp,ans,diff);
            temp.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& candy, int t) {
        sort(candy.begin(),candy.end());
        n=candy.size();
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,candy,temp,ans,t);
        return ans;
    }
};