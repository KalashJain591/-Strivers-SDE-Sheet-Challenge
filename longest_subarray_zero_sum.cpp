#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
int i,j,k,n=arr.size(),maxi=0;
vector<int>sum(n);
sum[0]=arr[0];

unordered_map<int,int>m1;
m1[0]=-1;
for(i=1;i<n;i++)
sum[i]=sum[i-1]+arr[i];
for(i=0;i<n;i++)
m1[sum[i]]=i;
maxi=max(maxi,m1[0]+1);
for(i=0;i<n;i++)
maxi=max(maxi,m1[sum[i]]-i);
return maxi;

}