class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* current=head;
        for(int i=1;i<=k;i++){
            if(current==NULL) return head;
            current=current->next;
        }
        
            ListNode* curr=head;
            ListNode* prev= NULL;
            ListNode* nextptr;
            int count=k;
            while(curr!=NULL and count--){
                nextptr=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextptr;
            }
        if(nextptr!=NULL){
        head->next=reverseKGroup(nextptr,k);
        }
        return prev;
        
        
    }
};