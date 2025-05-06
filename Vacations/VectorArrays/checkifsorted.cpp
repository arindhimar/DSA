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


    for(int i=0;i<n-1;i++){
        if(temp[i]>temp[i+1]){
            cout<<"Nope not sorted";
            exit(0);
        }
    }    

    cout<<"Sorted";

    return 0;
}
