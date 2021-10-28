class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* node = new ListNode(-1);
        int keta = 0;
        ListNode* ans = node;

        while(p1 || p2){
            int sum = 0;

            if (p1 != nullptr) {
                sum += p1->val; 
                p1 = p1->next;
            }
            if (p2 != nullptr) {
                sum += p2->val; 
                p2 = p2->next;
            }


            if (keta > 0) {
                sum++;
                keta = 0;
            }

            if (sum > 9) {
                keta = 1;
                sum = sum%10; 
            }

            if (node->val < 0 ) {
                node->val = sum; 
            } else {
                node->next = new ListNode(sum);
                node = node->next;
            }
            
            if (keta == 1) {
                node->next = new ListNode(keta);
            }
        }
        return ans;
    }
};

