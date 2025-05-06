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

    int n2;
    cin>>n2;


    vector<int> temp;
    int ele;
    for(int i = 0;i<n;i++)
    {
        cin>>ele;
        temp.push_back(ele);
    }

    vector<int> temp2;
    int ele2;
    for(int i = 0;i<n2;i++)
    {
        cin>>ele2;
        temp2.push_back(ele2);
    }


    // display(temp);
    
    vector<int> finalArr(temp.begin(),temp.end());
    finalArr.insert(finalArr.end(),temp2.begin(),temp2.end());



    set<int> s (finalArr.begin(),finalArr.end());

    for(int i:s){
        cout<<i<<" ";
    }

    return 0;
}
