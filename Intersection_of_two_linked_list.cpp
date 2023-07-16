#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  
class Solution {
public:
    ListNode* solve(int diff, ListNode*a,ListNode*b)
    {
        while(diff!=0){
        a=a->next;
        diff--;}
        while(a && b)
        {
            if(a==b)
            return a;
            a=a->next;
            b=b->next;

        }
        return a;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0,cnt2=0;
        ListNode*a=headA;
        ListNode*b=headB;
        
        while(headA || headB)
        {
            if(headA){
            cnt1++;
            headA=headA->next;}
            if(headB){
            cnt2++;
            headB=headB->next;}
        }
       
           int diff=max(cnt1,cnt2)-min(cnt1,cnt2);
           if(cnt1>cnt2)
           { 
               cout<<diff;
               return solve(diff,a,b);
           }
           else{
               cout<<diff;
               return solve(diff,b,a);
           }
        
    }
};