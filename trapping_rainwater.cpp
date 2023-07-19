#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// good question 
//optimal approach using 2 pointers 
    int trap(vector<int>& h) {
        int i=0,j,n=h.size(),left=0,right=n-1;
        int ans=0,lmax=h[0],rmax=h[n-1];

        while(left<right)
        {
          if(h[left]<=h[right]){
              if(lmax>h[left])
              ans+=lmax-h[left];
              else
              lmax=h[left];
              left++;
          }   
          else{
              if(rmax>h[right])
              ans+=rmax-h[right];
              else
              rmax=h[right];
              right--;
          }
          
        }
        return ans;

    }
};