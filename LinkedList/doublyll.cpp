#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void menu() {
    cout << "1 - Add at first" << endl;
    cout << "2 - Add at middle" << endl;
    cout << "3 - Add at last" << endl;
    cout << "4 - Delete at first" << endl;
    cout << "5 - Delete at middle" << endl;
    cout << "6 - Delete at last" << endl;
    cout << "7 - Exit" << endl;
}

void addAtFirst(Node*& head, Node*& last) {
    int temp;
    cout << "Enter value: ";
    cin >> temp;

    Node* newNode = new Node(temp);
    if (head == nullptr) {
        head = newNode;
        last = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void addAtLast(Node*& head, Node*& last) {
    int temp;
    cout << "Enter value: ";
    cin >> temp;

    Node* newNode = new Node(temp);
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        last = newNode;
        newNode->prev = nullptr;
    } else {
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
    }
}

void addAtMiddle(Node*& head, Node*& last) {
    int temp, position;
    cout << "Enter value: ";
    cin >> temp;
    cout << "Enter position to insert after (0 for first): ";
    cin >> position;

    Node* newNode = new Node(temp);
    if (position == 0) {
        addAtFirst(head, last);
        return;
    }

    Node* current = head;
    for (int i = 1; i < position && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position is out of bounds. Adding at the end instead." << endl;
        addAtLast(head, last);
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;
    current->next = newNode;

    if (newNode->next != nullptr) {
        newNode->next->prev = newNode;
    } else {
        last = newNode;
    }
}

void deleteAtFirst(Node*& head, Node*& last) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != nullptr) {
        head->prev = nullptr;
    } else {
        last = nullptr;
    }

    delete temp;
}

void deleteAtLast(Node*& head, Node*& last) {
    if (last == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = last;
    last = last->prev;

    if (last != nullptr) {
        last->next = nullptr;
    } else {
        head = nullptr;
    }

    delete temp;
}

void deleteAtMiddle(Node*& head, Node*& last) {
    int position;
    cout << "Enter position to delete (0 for first): ";
    cin >> position;

    if (position == 0) {
        deleteAtFirst(head, last);
        return;
    }

    Node* current = head;
    for (int i = 0; i < position && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position is out of bounds. Nothing to delete." << endl;
        return;
    }

    if (current->prev != nullptr) {
        current->prev->next = current->next;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    } else {
        last = current->prev;
    }

    delete current;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* last = nullptr;
    int opt;

    do {
        menu();
        cin >> opt;

        switch (opt) {
            case 1:
                addAtFirst(head, last);
                break;
            case 2:
                addAtMiddle(head, last);
                break;
            case 3:
                addAtLast(head, last);
                break;
            case 4:
                deleteAtFirst(head, last);
                break;
            case 5:
                deleteAtMiddle(head, last);
                break;
            case 6:
                deleteAtLast(head, last);
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
        printList(head);
    } while (opt != 7);

    return 0;
}   