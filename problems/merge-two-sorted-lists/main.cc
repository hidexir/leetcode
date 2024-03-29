struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans =  new ListNode(0);
        ListNode* blank = ans;
        
        ListNode* l1  = list1;
        ListNode* l2  = list2;
        
        while(l1 && l2){
            if(l1->val < l2->val) {
                //deprecate
                blank->next = l1;
                l1 = l1 -> next;
            }else{
                //deprecate
                blank->next = l2;
                l2 = l2 -> next;
            }
            blank = blank->next;
        }
        
        if(l1){
           blank->next = l1;
        }else{
           blank->next = l2;
        }
        
        return ans -> next;
    }
};

