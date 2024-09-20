#include<iostream>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr){
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while(slow!=fast){
            if(fast==nullptr||fast->next==nullptr){
                return false;
            }
            else{
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        
            return true;
        
        
    }
};

int main()
{
return 0;
}