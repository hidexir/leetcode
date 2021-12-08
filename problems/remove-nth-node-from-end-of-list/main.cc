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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* l1 = head;
        ListNode* l2 = head;
        
        int cnt = 0;
        while(l1){
            cnt +=1 ;
            l1 = l1->next;
        }
        
        int dTarget = cnt - n - 1; 
        
        int target = 0;
        
        if (cnt == n) {
            cout << "call" << endl;
            return l2->next; 
        }
        
        if (dTarget < 0) {
            return nullptr;
        }
        
        
        while(l2){
            if (target == dTarget) {
                l2->next = l2 -> next -> next;
                return head;
            }
            
            target +=1 ;
            l2 = l2->next;
        }
        
        return head;
    }
};
