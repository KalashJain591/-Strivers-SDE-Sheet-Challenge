#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
      unordered_map<int,int>m1;
      int i,j,k,maxi=1,count=0;
      for(i=0;i<n;i++)
      m1[arr[i]]=1;
      for(auto itr:m1){
          int t=itr.first-1;
          if(!m1.count(t)){
              t=itr.first;
              while(m1.count(t)){
                  t++;
              }
              maxi=max(maxi,t-itr.first+1);
          }
      }
      return maxi-1;
}