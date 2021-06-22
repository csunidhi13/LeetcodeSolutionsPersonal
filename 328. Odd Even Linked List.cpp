class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head or !head->next){
            return head;
        }
        
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenstart=head->next;
        while(odd->next!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }

        odd->next=evenstart;
        
        return head;
    }
};