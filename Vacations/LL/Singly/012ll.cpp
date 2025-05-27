class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        unordered_map<int,int> um;
        Node *temp = head;
        
        while(temp!=nullptr){
            um[temp->data]++;
            temp = temp->next;
        }
        
        temp=head;
        
        for(int i=0;i<=2;i++){
            while(count!=um[i]){
                temp->data=i;
                temp=temp->next;
                um[i]--;
            }
        }
        
        return head; 
        
    }
};