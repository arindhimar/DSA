#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int tempData)
    {
        data = tempData;
        next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        this->head = nullptr;
    }

    void menu()
    {
        cout << "1 - Add at first\n";
        cout << "2 - Add at last\n";
        cout << "3 - Add in middle\n";
        cout << "4 - Delete at first\n";
        cout << "5 - Delete at last\n";
        cout << "6 - Delete at middle\n";
        cout << "7 - Display\n";
        cout << "10 - Exit\n";
    }

    void addAtFirst(int tempData)
    {
        Node *newNode = new Node(tempData);
        newNode->next = head;
        head = newNode;
    }

    void addAtLast(int tempData)
    {
        Node *newNode = new Node(tempData);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void addAtMiddle(int pos, int tempData)
    {
        if (pos <= 0)
        {
            cout << "Position should be greater than 0." << endl;
            return;
        }

        Node *newNode = new Node(tempData);
        if (pos == 1)
        {
            // If position is 1, add at the beginning
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *temp = head;
        int count = 1; // To keep track of current node position

        // Traverse to the node just before the insertion point
        while (temp != nullptr && count < pos - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr)
        {
            cout << "Position is out of range." << endl;
            delete newNode;
        }
        else
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void displayData()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    SinglyLinkedList list;
    int opt, tempValue, pos;

    do
    {
        list.menu();
        cout << "Select Option: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter value to insert at first: ";
            cin >> tempValue;
            list.addAtFirst(tempValue);
            break;
        case 2:
            cout << "Enter value to insert at last: ";
            cin >> tempValue;
            list.addAtLast(tempValue);
            break;
        case 3:
            cout << "Enter position and value to insert: ";
            cin >> pos >> tempValue;
            list.addAtMiddle(pos, tempValue);
            break;
            break;
        case 7:
            list.displayData();
            break;
        default:
            break;
        }
    } while (opt != 10);

    return 0;
}
