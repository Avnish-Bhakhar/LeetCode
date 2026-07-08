/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>v;
        int ans = INT_MIN;

        ListNode* ptr=head;
        while(ptr != NULL){
            v.push_back(ptr-> val);
            ptr = ptr->next;
        }
        int j = v.size()-1;
        for(int i=0; i<v.size()/2; i++){
            ans = max(ans, (v[i]+v[j]));
            j--;
        }
        return ans;
        
    }
};