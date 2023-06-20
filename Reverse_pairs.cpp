#include <bits/stdc++.h>
using namespace std;
int cnt=0 ,n;

void solve(int *A,int p,int *B,int q){
int i=0,j=0;
while(i<p && j<q){
    if((long long)A[i]>(long long)2*B[j]){
    cnt+=p-i;
    j++;}
    else
    i++;
}

}

void Merge(int l ,int mid ,int h,vector<int>&nums){
    int p=mid-l+1,q=h-mid,r=p+q,i,j,k;
    int A[p],B[q],C[r];
    for(i=0;i<p;i++)
    A[i]=nums[i+l];
    for(i=0;i<q;i++)
    B[i]=nums[mid+1+i];

    solve(A,p,B,q);
    i=0,j=0,k=0;
    while(i<p && j<q){
    
    if(A[i]<B[j]){
    C[k]=A[i];i++;}
    
    else{
        C[k]=B[j];
        j++;
    }
    k++;
    }
    while(i<p){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<q){
        C[k]=B[j];
        j++;
        k++;
    }
    for(i=0;i<r;i++){
        nums[i+l]=C[i];
    }
    
}

void MergeSort(int l,int h,vector<int>&nums){
if(l<h){
    int mid=l+(h-l)/2;
    MergeSort(l,mid,nums);
    MergeSort(mid+1,h,nums);
    Merge(l,mid,h,nums);
}


}
    int reversePairs(vector<int>& nums,int n) {
         n=nums.size();
		 cnt=0;
          MergeSort(0,n-1,nums);
          return cnt;  
    }
// int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
// }