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
    cout << "\n1 - Insert\n";
    cout << "2 - Update\n";
    cout << "3 - Delete\n";
    cout << "4 - Display\n";
    cout << "5 - Search\n";
    cout << "6 - Exit\n";
}

void insert(Node *&head) {
    int data;
    cout << "Enter data to insert: ";
    cin >> data;
    if (head == nullptr) {
        head = new Node(data);
    } else {
        Node* temp2 = new Node(data);
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = temp2;
    }
}

void display(Node *head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    for (Node* temp = head; temp != nullptr; temp = temp->next) {
        cout << temp->data << " ";
    }
    cout << endl;
}

void deleteNode(Node *&head) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete.\n";
        return;
    }

    int tempData;
    cout << "Enter data to delete: ";
    cin >> tempData;

    if (head->data == tempData) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* prev = head;
    Node* curr = head->next;

    while (curr != nullptr) {
        if (curr->data == tempData) {
            prev->next = curr->next;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "Data not found in the list.\n";
}

int main() {
    int opt;
    Node* head = nullptr;
    do {
        menu();
        cout << "Select option: ";
        cin >> opt;

        switch (opt) {
            case 1:
                insert(head);
                break;
            case 3:
                deleteNode(head);
                break;
            case 4:
                display(head);
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
                break;
        }

    } while (opt != 6);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
