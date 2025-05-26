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
        stack<int> st;
        ListNode *temp = head;
        while(temp != nullptr) {
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* newHead = nullptr;
        int ct = 1;
        while(!st.empty()) {
            if(ct++ != n) {
                if(!newHead) {
                    newHead = new ListNode(st.top());
                    st.pop();
                    newHead->next = nullptr;
                } else {
                    ListNode *tempHead = new ListNode(st.top());
                    st.pop();
                    tempHead->next = newHead;
                    newHead = tempHead;
                }
            } else {
                st.pop();
            }
        }
        head = newHead;
        return head;
    }
};