
class Solution {
    ListNode* kthNode(ListNode* head, int k) {
        for(int i=1;i<k;i++){
            head=head->next;
        }
        return head;
    }
    ListNode* reverse(ListNode* head){
        ListNode * prev=nullptr;
        ListNode * cur=head;
        while(cur != nullptr){
            ListNode* fut=cur->next;
            cur->next=prev;
            prev=cur;
            cur=fut;
        }
        return prev;
    }
    public:
    ListNode* swapNodes(ListNode* head, int k){
        if(head->next==nullptr) return head;
        ListNode * frontK= kthNode(head,k);
        ListNode * revHead= reverse(head);
        ListNode * backK= kthNode(revHead,k);
        swap(frontK->val,backK->val);
        return reverse(revHead);
    }
};