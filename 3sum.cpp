#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// #3rd approach
// 2 pointer and sorting  
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k,n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            k=n-1;
            j=i+1;
            while(j<k){
               int sum=nums[i]+nums[j]+nums[k];
               if(sum<0){
                j++;
               }
               if(sum>0){
                k--;
               }
               if(sum==0){
                   ans.push_back({nums[i],nums[j],nums[k]});
                   j++;
                   k--;
                while(j<n && nums[j]==nums[j-1])
                j++;
                while(k>=0 && nums[k]==nums[k+1])
                k--;
               }

            }
        }
        return ans;
    }
};