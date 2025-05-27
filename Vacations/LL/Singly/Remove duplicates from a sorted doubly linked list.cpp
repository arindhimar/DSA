class Solution {
public:
    Node *removeDuplicates(struct Node *head) {
        Node *temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->data == temp->next->data) {
                Node *dup = temp->next;
                temp->next = dup->next;
                if (dup->next != nullptr) {
                    dup->next->prev = temp;
                }
                delete dup;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
