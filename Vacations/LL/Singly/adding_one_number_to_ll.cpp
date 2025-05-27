class Solution {
public:
    Node* addOne(Node* nhead) {
        stack<int> st;
        Node* temp = nhead;

        while (temp != nullptr) {
            st.push(temp->data);
            temp = temp->next;
        }

        int carry = 1;
        Node* last = nullptr;

        while (!st.empty()) {
            int tempVal = st.top();
            st.pop();

            if (carry == 1) {
                tempVal += 1;
                carry = 0;
            }

            if (tempVal >= 10) {
                carry = 1;
                tempVal -= 10;
            }

            Node* tempNode = new Node(tempVal);
            tempNode->next = last;
            last = tempNode;
        }

        if (carry == 1) {
            Node* tempNode = new Node(1);
            tempNode->next = last;
            last = tempNode;
        }

        return last;
    }
};
