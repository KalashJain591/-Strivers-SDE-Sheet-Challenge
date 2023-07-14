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
// 3 rd approach without using any queue , in single traverse
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*ptr1=head , *ptr2=head;
        
        int i,j,k;
        for(i=0;i<n;i++)
        ptr1=ptr1->next;
        
        if(ptr1==NULL)
        return head->next;

        while( ptr1->next!=NULL){
        ptr2=ptr2->next;
        ptr1=ptr1->next;}
        
        
        ptr2->next=ptr2->next->next?ptr2->next->next:NULL;
        return head;
        
    }
};