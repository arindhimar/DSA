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


    int k = n/2;

    // display(temp);
    unordered_map<int,int> ump;

    for(int i=0;i<temp.size();i++){
        ump[temp[i]]++;

        if(ump[temp[i]]>k){
            cout<<temp[i];
            break;
        }
    }
    

    

    return 0;
}
