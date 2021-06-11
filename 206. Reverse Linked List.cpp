class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* n;
     
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
            
          
        }
        head=prev;
        return head;
        

        //  stack<ListNode*> s;
        // if(!head) return NULL;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     s.push(temp);
        //     temp=temp->next;
        // }
        
        // head=s.top();
        // temp=s.top();
        // s.pop();
        // while(!s.empty()){
        //     temp->next=s.top();
        //     s.pop();
        //     temp=temp->next;
        // }
        // temp->next=NULL;
        // return head;
    }
};

