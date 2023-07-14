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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t=new ListNode();;
        ListNode* ans=t;
        // t=new ListNode();
        int i,j,carry=0;
        while(l1!=nullptr && l2!=nullptr)
        {
            int temp=l1->val+l2->val+carry;
            t->val=temp%10;
            carry=temp/10;
            
            t->next=new ListNode();
            t=t->next;
            l1=l1->next;
            l2=l2->next;    
        }
        // cout<<l1 <<l2;
        while(l1)
        {
            int temp=l1->val+carry;
            t->val=temp%10;
            carry=temp/10;
            t->next=new ListNode();
            t=t->next;
            l1=l1->next;
        }
        while(l2)
        {
            int temp=l2->val+carry;
            t->val=temp%10;
            carry=temp/10;
            t->val=temp-carry;
            t->next=new ListNode();
            t=t->next;
            l2=l2->next;

        }
        if(carry>0)
        t->val=carry;
        else
        t->next=NULL;
        

        return ans;
    }
};