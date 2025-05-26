/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> visited;
        ListNode *temp = head;
        while (temp != nullptr) {
            if (visited.find(temp) != visited.end()) {
                return temp;
            }
            visited.insert(temp);
            temp = temp->next;
        }
        return nullptr;
    }
};