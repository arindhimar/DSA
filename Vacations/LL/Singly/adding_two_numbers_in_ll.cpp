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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = nullptr;
        ListNode* temp3 = nullptr;
        
        while(temp1 != nullptr || temp2 != nullptr) {
            int val1 = (temp1 != nullptr) ? temp1->val : 0;
            int val2 = (temp2 != nullptr) ? temp2->val : 0;
            
            int tempVal = val1 + val2 + carry;
            carry = 0;
            if(tempVal >= 10){
                carry = 1;
                tempVal -= 10;
            }
            
            ListNode* newNode = new ListNode(tempVal);
            newNode->next = nullptr;
            
            if(head == nullptr) {
                head = newNode;
                temp3 = newNode;
            } else {
                temp3->next = newNode;
                temp3 = newNode;
            }
            
            if(temp1 != nullptr) temp1 = temp1->next;
            if(temp2 != nullptr) temp2 = temp2->next;
        }
        
        if(carry == 1) {
            ListNode* newNode = new ListNode(1);
            temp3->next = newNode;
            newNode->next = nullptr;
        }
        
        return head;
    }
};

