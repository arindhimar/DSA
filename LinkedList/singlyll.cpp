#include <bits/stdc++.h>
using namespace std;

class Node {
public: 
    int data;
    Node *next;
    
    Node(int data) {
        this->data = data; 
        this->next = nullptr; 
    }
};

void menu() {
    cout << "1 - Add at first\n";
    cout << "2 - Add at last\n";
    cout << "3 - Add in middle\n";
    cout << "4 - Delete at first\n";
    cout << "5 - Delete at last\n";
    cout << "6 - Delete in middle\n";
    cout << "7 - Update at first\n";
    cout << "8 - Exit\n";
}

void addAtFirst(Node *&head, Node *&last) { 
    int temp;
    cout << "Enter value for new node: ";
    cin >> temp;

    Node* tempNode = new Node(temp);
    
    if (head == nullptr) {
        head = tempNode;
        last = tempNode;
    } else {
        tempNode->next = head;
        head = tempNode;
    }
}

void addAtLast(Node *&head, Node *&last) { 
    int temp;
    cout << "Enter value for new node: ";
    cin >> temp;

    Node* tempNode = new Node(temp);
    
    if (head == nullptr) {
        head = tempNode;
        last = tempNode;
    } else {
        last->next = tempNode;
        last = tempNode;
    }
}

void addAtMiddle(Node *&head, Node *&last) {
    if (head == nullptr) {
        cout << "List is empty!!" << endl;
        return;
    }

    int position;
    cout << "Enter position to insert the node: ";
    cin >> position;

    if (position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 0) {
        addAtFirst(head, last);
        return;
    }

    Node *current = head;

    for (int ct = 0; ct < position - 1 && current != nullptr; ct++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position is out of bounds!" << endl;
        return;
    }

    int tempVal;
    cout << "Enter value for new node: ";
    cin >> tempVal;
    Node *tempptr = new Node(tempVal);

    tempptr->next = current->next;
    current->next = tempptr;

    if (tempptr->next == nullptr) {
        last = tempptr;
    }
}

void deleteAtFirst(Node *&head, Node *&last) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    if (head == nullptr) {
        last = nullptr;
    }
}

void deleteAtLast(Node *&head, Node *&last) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head == last) {
        delete head;
        head = nullptr;
        last = nullptr;
        return;
    }
    Node *current = head;
    while (current->next != last) {
        current = current->next;
    }
    delete last;
    last = current;
    last->next = nullptr;
}

void deleteAtMiddle(Node *&head, Node *&last) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    int position;
    cout << "Enter position to delete the node: ";
    cin >> position;

    if (position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 0) {
        deleteAtFirst(head, last);
        return;
    }

    Node *current = head;
    for (int ct = 0; ct < position - 1 && current != nullptr; ct++) {
        current = current->next;
    }

    if (current == nullptr || current->next == nullptr) {
        cout << "Position is out of bounds!" << endl;
        return;
    }

    Node *temp = current->next;
    current->next = temp->next;
    delete temp;

    if (current->next == nullptr) {
        last = current; // Update last if we deleted the last node
    }
}

void updateAtFirst(Node *&head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    int newValue;
    cout << "Enter new value for the first node: ";
    cin >> newValue;
    head->data = newValue;
}

void printList(Node *&head) {
    for (Node *st = head; st != nullptr; st = st->next) {
        cout << st->data << " ";
    }
    cout << endl;
}

int main() {
    int opt;
    Node *head = nullptr;
    Node *last = nullptr;

    do {
        menu();
        cin >> opt;

        switch(opt) {
            case 1:
                addAtFirst(head, last);
                break;
            case 2:
                addAtLast(head, last);
                break;
            case 3:
                addAtMiddle(head, last);
                break;
            case 4:
                deleteAtFirst(head, last);
                break;
            case 5:
                deleteAtLast(head, last);
                break;
            case 6:
                deleteAtMiddle(head, last);
                break;
            case 7:
                updateAtFirst(head);
                break;
            case 8:
                exit(0);
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
        
        cout << "List: ";
        printList(head);
        
    } while(opt != 8);

    return 0;
}