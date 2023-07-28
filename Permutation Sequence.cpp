#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// naive approach to calculate each and every permutation 
// TC O(n*n!);
int cnt;
string ans;
    void solve(string&pref, string&rem,int &flag)
    {
        if(rem.size()==0)
        {
            cnt--;
            if(cnt==0){
            ans=pref;
            flag=1;}
            return;
        }
        int i,j,k;
        string t="";
        for(i=0;i<rem.size();i++)
        {
            string p=rem.substr(0,i) ;
            if(i+1<rem.size())
            p+=rem.substr(i+1);
            pref.push_back(rem[i]);
            solve(pref,p,flag);
            if(flag)
            return;
            pref.pop_back();
        }

    }
    string getPermutation(int n, int k) {
        string rem,pref="";
        int i,flag;
        cnt=k;
        for(i=1;i<=n;i++)
        rem.push_back('0'+i);
        flag=0;
        solve(pref,rem,flag);
        return ans;

    }
};