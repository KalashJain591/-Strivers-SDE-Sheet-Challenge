#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,k,n=nums.size(),valid=0;
        for(i=0;i<n;i++)
        {
            while(i<n-1 && nums[i]==nums[i+1])
            i++;
            nums[valid]=nums[i];
            valid++;
        }
        return valid ;
        
    }
};