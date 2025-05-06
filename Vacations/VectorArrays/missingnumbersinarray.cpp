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

    for(int i=1;i<n;i++){
        if((temp[i]-temp[i-1])!=1){
            cout<<(temp[i]-1);
            exit(0);
        }
    }

    cout<<"-1";
    

    return 0;
}
