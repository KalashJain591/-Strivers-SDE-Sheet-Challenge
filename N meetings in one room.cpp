//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
   static const bool cmp (pair<int,int>&a ,pair<int,int>&b){
        return a.first<b.first;
    }
    int maxMeetings(int st[], int end[], int n)
    {
        vector<pair<int,int>>v1;
        int i,j,k;
        for(i=0;i<n;i++){
            v1.push_back({end[i],st[i]});
        }
        sort(v1.begin(),v1.end(),cmp);
        int cnt=1,prev=v1[0].first;
        for(i=1;i<n;i++){
            if(v1[i].second>prev)
            {
                cnt++;
                prev=v1[i].first;
            }
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends