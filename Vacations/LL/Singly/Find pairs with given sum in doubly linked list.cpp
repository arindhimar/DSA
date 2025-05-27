class Solution {
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        unordered_map<int, int> um;
        vector<pair<int, int>> tempV;
        Node *temp = head;

        while (temp != nullptr) {
            int rem = target - temp->data;

            if (um.find(rem) != um.end()) {
                for (int i = 0; i < um[rem]; i++) {
                    tempV.push_back(make_pair(rem, temp->data));
                }
            }

            um[temp->data]++;
            temp = temp->next;
        }
        reverse(tempV.begin(),tempV.end());
        return tempV;
    }
};