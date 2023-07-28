#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int n;
void swap (int i,int idx,vector<int>&nums){
    
    int temp=nums[idx];
    nums[idx]=nums[i];
    nums[i]=temp;
}
    void solve(int idx, vector<vector<int>>&ans, vector<int>&nums)
    {
        if(idx==n)
        {
            ans.push_back(nums);
            return;
        }


        int i;
        for(i=idx;i<n;i++)
        {
            swap(i,idx,nums);
            solve(idx+1,ans,nums);   
            swap(i,idx,nums);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
    
      vector<vector<int>>ans;
    //   vector<int>temp;
    //   set<int>s1();
      n=nums.size();
      solve(0,ans,nums);
      return ans;
    }
};