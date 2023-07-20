//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   void solve(int idx, vector<int>&arr,unordered_set<int>&s1,int sum){
       if(idx==arr.size())
        {
           
            s1.insert(sum);
            return;
        }
       solve(idx+1,arr,s1,sum+arr[idx]);
       solve(idx+1,arr,s1,sum);
       
   }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        unordered_set<int>s1;
        solve(0,arr,s1,0);
        vector<int>v1(s1.begin(),s1.end());
        return v1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends