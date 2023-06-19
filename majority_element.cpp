#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //  azimqulovdiyorbek@gmail.com   
    int majorityElement(vector<int>& nums) {
        int element =-1 , cnt=0 ,i;
        for(i=0;i<nums.size();i++){
            if(cnt==0){
                element=nums[i];
                cnt++;
            }
            else if(nums[i]==element)
            cnt++;
            else
            cnt--;
        }
        return element ;
        
    }
};