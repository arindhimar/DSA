#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &temp){
    for(int i=0;i<temp.size();i++){
        cout<<temp.at(i)<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> temp;
    int ele;
    for(int i = 0;i<n;i++)
    {
        cin>>ele;
        temp.push_back(ele);
    }

    // set<int> s(temp.begin(),temp.end());

    // for(int i:s){
    //     cout<<i;
    // }

    // vector<int> finalarr;

    // for(int i:temp){
    //     cout<<count(finalarr.begin(),finalarr.end(),i);
    //     if((count(finalarr.begin(),finalarr.end(),i)==0)){
    //         finalarr.push_back(i);
    //     }
    // }

    // display(finalarr);   
    
    
    // vector<int> finalArr;

    // for(int i:temp){
    //     auto it = find(finalArr.begin(),finalArr.end(),i);

    //     if(it==finalArr.end()){
    //         finalArr.push_back(i);
    //     }
    // }

    // display(finalArr);


    unordered_map<int, bool> seen;
    vector<int> uniqueElements;

    for (int i : temp) {
        if (seen.find(i) == seen.end()) {
            uniqueElements.push_back(i);
            seen[i] = true; 
        }
    }

    display(uniqueElements);

    return 0;
}
