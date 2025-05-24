#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next=nullptr;
    }
};

void menu(){
    cout<<"1 - Insert\n";
    cout<<"2 - Update\n";
    cout<<"3 - Delete\n";
    cout<<"4 - Display\n";
    cout<<"5 - Search\n";
    cout<<"6 - Exit\n";
}

void insert(Node *&head){
    int data;
    cin>>data;
    if(head==nullptr){
        head = new Node(data);
    }
    else{
        Node* temp2 = new Node(data);
        Node* temp = head;
        for(temp = head;temp->next!=nullptr;temp=temp->next);
        temp->next=temp2;
    }
}

void display(Node *&head){
    for(Node* temp=head;temp!=nullptr;temp=temp->next){
        cout<<temp->data<<" ";
    }
}

int main()
{
    int opt;
    Node* head = nullptr;
    do{
        menu();
        cout<<"Select option        ";
        cin>>opt;

        switch(opt){
            case 1:
            insert(head);
            break;
            case 4:
            display(head);
            break;
        }

    }while(opt!=6);

    return 0;
}