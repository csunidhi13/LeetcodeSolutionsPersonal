class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        ListNode*prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr;
        int k=2;
        while(curr!=NULL and k--){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            
        }
        if(nextptr!=NULL) head->next=swapPairs(nextptr);
        return prev;
    }
};