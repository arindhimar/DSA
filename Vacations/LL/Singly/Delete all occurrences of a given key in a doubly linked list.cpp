// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* current = *head_ref;

        while (current != nullptr) {
            if (current->data == x) {
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                } else {
                    *head_ref = current->next;
                }

                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                }

                Node* temp = current;
                current = current->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }
};
