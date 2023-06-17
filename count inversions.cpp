#include <bits/stdc++.h>
long long int ans=0;


void merge(int l, int mid, int r, long long *arr) {
    long long n = mid - l + 1, m = r - mid, a[n], b[m], i, j, k, p = 0, q = 0;
    j = 0;
    for (i = 0; i < n; i++)
        a[i] = arr[i + l];

    for (i = 0; i < m; i++)
        b[i] = arr[i + mid + 1];

    j = l;
    while (p < n && q < m) {
        if (a[p] <= b[q]) {
            arr[j] = a[p];
            p++;
        } else {
            arr[j] = b[q];
            ans += n - p;
            q++;
        }
        j++;
    }
    while (p < n) {
        arr[j] = a[p];
        p++;
        j++;
    }
    while (q < m) {
        arr[j] = b[q];
        q++;
        j++;
    }
}


void mergeSort(int l, int r, long long *arr) {
 if(l<r){
     int mid = l + (r-l)/2;
     mergeSort(l,mid,arr);
     mergeSort(mid+1,r,arr);
     merge(l,mid,r,arr);
     
 }  
}

long long getInversions(long long *arr, int n){
    mergeSort(0,n-1,arr); 
    int i;
    // for(i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    return ans;
}