/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
public:
    int countNodesinLoop(Node *head) {
        unordered_map<Node*, int> visitedNodes; 
        Node* temp = head; 
        int timer = 0; 
        
        while (temp != nullptr) {
            if (visitedNodes.find(temp) != visitedNodes.end()) {
                int loopLength = timer - visitedNodes[temp];
                return loopLength; 
            }
            visitedNodes[temp] = timer;
            temp = temp->next;
            timer++;
        }
        return 0;
    }
};
