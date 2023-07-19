//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    bool static cmp(pair<double,int>&a,pair<double,int>&b){
    return a.first>b.first;
        
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       // I will make an array of throughput and sort it in decreasing order.
       vector<pair<double,int>>v1; // throughput vector
       int i,j,k;
       for(i=0;i<n;i++){
           double val=(double)arr[i].value/(double)arr[i].weight;// pain point😥
           v1.push_back({val,i});
       }
       sort(v1.begin(),v1.end(),cmp);
       double ans=0.0,rem=W;
       for(i=0;i<n;i++){
       
               double wt=arr[v1[i].second].weight;
               double val=arr[v1[i].second].value;
               if(rem>=wt){
               ans+=val;
               rem-=wt;}
               else{
                  ans+=val*(rem/wt);
                  rem=0; break;
               }
           
          
       }
       return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends