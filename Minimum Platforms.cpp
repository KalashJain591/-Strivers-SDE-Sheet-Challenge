//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    // Now without using the space .we will use the fact that the time period for which a station remains 
    // occupied .
    // Use 2 pointers. 
        vector<pair<int,int>>v1;
        int i;
        sort(arr,arr+n);
        sort(dep,dep+n);
        int cnt=0,maxi=1, ptr1=0, ptr2=0; // ptr1 the min time for which a station will remain occupied .
        while(ptr1<n && ptr2<n)
        {
            if(arr[ptr2]>dep[ptr1]){
               cnt--;
               ptr1++;
            }
            else
            {
                cnt++;
                ptr2++;
            }
            maxi=max(maxi,cnt);
            
            
        }
        return maxi;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends