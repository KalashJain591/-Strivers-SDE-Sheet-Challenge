#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();

    //    To store the prefix XOR's.
    unordered_map<int, int> prefXor;

    int ans = 0;

    //    To keep track of the current xor.
    int currXor = 0;

    //    Intialy Xor is 0.
    prefXor[0]++;

    for (int i = 0; i < n; i++)
    {
        //    Update the Xor of the current prefix.
        currXor = currXor ^ arr[i];

        //    Required value of the prefix Xor to make the xor of the subarray ending at the current index equal to X.
        int req = x ^ currXor;

        //    Add the count of prefix arrays with required xor.
        ans += prefXor[req];

        prefXor[currXor]++;
    }

    return ans;
}
