//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int n,b=1e9;
	
	int solve(int idx ,int sum ,int coins[],vector<vector<int>>&s)
	{
	   if(idx==n)
	   return b;
	   
	   if(sum==0)
	   return 0;
	   if(s[idx][sum]!=-1)
	   return s[idx][sum];
	   
	   int a=solve(idx+1,sum,coins,s);
	   if(coins[idx]>sum)
	   return s[idx][sum]=a;
	   
	   int b=1+solve(idx,sum-coins[idx],coins,s);
	   //int c=1+solve(idx+1,sum-coins[idx],coins,s);
	   
	   //if(b==INT_MAX)
	   //b=INT_MAX-1;
	   //if(c==INT_MAX)
	   //c=INT_MAX-1;
	   
	   return s[idx][sum]=min(a,b);
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    vector<vector<int>>s(M+1,vector<int>(V+1,-1));
	    n=M;
	    int a=solve(0,V,coins,s);
	    if(a==1e9)
	    a=-1;
	    return a;
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends