#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i,j=0,k,maxi=0,n=s.size();
      vector<int>hash(200);
      int temp;
    //   cout<<s[0]-' '
      for(i=0;i<n;i++)
      {
          if(hash[s[i]-' '])
          {
              hash[s[j]-' ']--;
              j++;
              i--;
          }
          else{
              hash[s[i]-' ']=1;
              maxi=max(maxi,i-j+1);
          }

      }
      return maxi;

    }
};