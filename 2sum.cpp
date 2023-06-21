#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m1;
       int i,j,n=nums.size();
       for(i=0;i<n;i++){
       m1[nums[i]]=i;
       } 
       for(i=0;i<n;i++){
           int temp=target-nums[i];
           if(m1[temp] && m1[temp]!=i)
           return {i,m1[temp]};
       }
       return {0,0};
    }
};