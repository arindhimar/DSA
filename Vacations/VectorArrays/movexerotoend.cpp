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


    // display(temp);

    int f=0;

    for(int i=0;i<n;i++){   
        if(temp[i]!=0){
            temp[f] = temp[i];
            f++;
        }
    }


    // cout<<f;
    for(int i = f;i<n;i++)
    {
        // cout<<"Asdkjashdjkhasjkd";
        temp[i]=0;
    }

    display(temp);

    return 0;
}
