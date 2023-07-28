#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insert(string& s,vector<string>&temp,int st, int end )
    {
        string S;
        for(int i=st;i<=end;i++)
        S.push_back(s[i]);
        temp.push_back(S);
    }
    int n;
    bool check (int st , int en ,string&s )
    {
        while(st<en)
        {
            if(s[st]!=s[en])
            return false;
            st++;
            en--;
        }
        return true;
    }

    void solve(int st, int en , vector<string>&temp,vector<vector<string>>&ans,string &s)
    {
        if(en==n)
        {
           if(st==en)
            ans.push_back(temp);
            return ;
        }
        if(check(st,en,s))
        {
            insert(s,temp,st,en);
            solve(en+1,en+1,temp,ans,s);
            temp.pop_back();
        }
        solve(st,en+1,temp,ans,s);
        return;


    }
    vector<vector<string>> partition(string s) {
       int i,j;
       n=s.size();
        vector<vector<string>>ans;
        vector<string>temp;
        solve(0,0,temp,ans,s);
        return ans;
    }
};