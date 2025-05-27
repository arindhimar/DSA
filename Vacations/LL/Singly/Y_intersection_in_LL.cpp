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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> um;

        ListNode* temp=headA;

        while(temp!=nullptr){
            um[temp]=1;
            temp=temp->next;
        }


        temp=headB;

        while(temp!=nullptr){
            if(um.find(temp)!=um.end()){
                return temp;
            }
            temp = temp->next;
        }

        return nullptr;
    }
};