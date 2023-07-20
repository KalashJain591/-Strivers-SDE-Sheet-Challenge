#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int n;
    void solve(int curr, vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp){
       
        ans.push_back(temp);
        int i,j;
        for(i=curr;i<n;i++){
            if(i!=curr && nums[i]==nums[i-1])
            continue;
            temp.push_back(nums[i]);
            solve(i+1,nums,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        n=nums.size();
        solve(0,nums,ans,temp);
        return ans;

    }
};