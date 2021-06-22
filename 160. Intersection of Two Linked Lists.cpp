class Solution {
public:
    int length(ListNode* head){
        if(!head) return 0;
        int count=1;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==headB) return headA;
        int l1=length(headA);
        int l2=length(headB);
        ListNode* p1;
        ListNode* p2;
        int d=0;
        if(l1>=l2) p1=headA,p2=headB,d=l1-l2;
        else p1=headB,p2=headA,d=l2-l1;
        while(d--){
            p1=p1->next;
        }
        
        bool inter=false;
        while(p1!=NULL and p2!=NULL){
            if(p1==p2){
                inter=true;
                return p1;
                
            }
            p1=p1->next;
            p2=p2->next;
        }
       
       return NULL;   
    }
};