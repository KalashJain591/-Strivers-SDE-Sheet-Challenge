#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int>&nums)
{
     int i,j,cnt1=0,cnt2=0,elem1=INT_MIN,elem2=INT_MIN,n=nums.size();
        for(i=0;i<nums.size();i++)
        {
            if(cnt1==0 && nums[i]!=elem2){
                elem1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 && nums[i]!=elem1){
                elem2=nums[i];
                cnt2++;
            }
            else if (nums[i]==elem1){
                cnt1++;
            }
            else if (nums[i]==elem2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(i=0;i<n;i++){
            if(nums[i]==elem1)
            cnt1++;
            else if(nums[i]==elem2)
            cnt2++;
        }
        vector<int>v1;
        if(cnt1>n/3)
        v1.push_back(elem1);
        if(cnt2>n/3)
        v1.push_back(elem2);
        return v1;


}