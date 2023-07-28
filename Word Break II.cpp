#include <bits/stdc++.h>
int n; 
void solve(int st,int en, string &temp, vector<string>&ans,unordered_map<string ,int>&m1,string&s)
{
   if(en==n){
       
       temp.pop_back();
       ans.push_back(temp);
       temp.push_back(' ');
      
       return ;
   }
   string t;
   int i;
   for(i=st;i<n;i++){
       t.push_back(s[i]);
       temp.push_back(s[i]);
       if(m1.count(t))
       {
           temp.push_back(' ');
           solve(i+1,i+1,temp,ans,m1,s);
           temp.pop_back();
       }
   }
   while(st!=n){
       temp.pop_back();
       st++;
   }

}
vector<string> wordBreak(string &s, vector<string> &dict)
{
    string temp="";
    vector<string>ans;
    unordered_map<string,int >m1(dict.begin);

    n=s.size();
    solve(0,0,temp,ans,m1,s);
    return ans;
}