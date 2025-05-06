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

    int max = temp[0];

    for(int i=1;i<n;i++){
        if(temp[i]>max){
            max= temp[i];        }
    }


    cout<<"Max = "<<max;
    // display(temp);
    

    return 0;
}
