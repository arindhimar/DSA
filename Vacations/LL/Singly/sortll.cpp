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
    ListNode* sortList(ListNode* head) {

        vector<int> tempArr;

        ListNode *temp = head;

        while(temp!=nullptr){
            tempArr.push_back(temp->val);
            temp=temp->next;
        }


        sort(tempArr.begin(),tempArr.end());

        temp = head;
        int count=0;
        while(temp!=nullptr){
            temp->val = tempArr[count++];
            temp=temp->next;
        }

        return head;
        
    }
};