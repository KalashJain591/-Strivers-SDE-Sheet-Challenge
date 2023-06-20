#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &nums, int target){
    unordered_map<int,vector<int>>m1;
    vector<vector<int>>ans;
       int i,j,n=nums.size();
       for(i=0;i<n;i++){
       int temp=target-nums[i];
       if(m1.count(temp)){
         for(j=0;j<m1[temp].size();j++){
            
         ans.push_back({min(nums[m1[temp][j]],nums[i]),max(nums[m1[temp][j]],nums[i])});
       }
       }  
       m1[nums[i]].push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}