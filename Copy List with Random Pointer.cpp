  #include <bits/stdc++.h>
using namespace std;
  struct Node {
      int val;
      Node *next,*random;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr),random(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
  };

class Solution {
    // In this approach We will be using O(1) extra space and O(n) time complexity
    //It is a 3 step process .
    //https://takeuforward.org/data-structure/clone-linked-list-with-random-and-next-pointer/#:~:text=Solution%202%3A%20Optimized
public:
    Node* copyRandomList(Node* head) {
        Node*curr,*first=head,*start,*prev=NULL,*second;
        int flag=0;
        while(head)
        {
            Node * curr=new Node(head->val);
            second=head->next;;
            curr->next=second;
            head->next=curr;
            head=second;
        }
        head=first;
        while(head)
        {
            if(head->random)
            head->next->random=head->random->next;
            else
            head->next->random=NULL;
            head=head->next->next;
        }
        head=first;
        int cnt=0;
        while(head)
        {
           prev=head->next;
           if(head->next)
           head->next=head->next->next;
           head=prev;
           if(cnt==0)
           {
               second=head;
           }
           cnt++;
        }
        return second;


       
    }
};