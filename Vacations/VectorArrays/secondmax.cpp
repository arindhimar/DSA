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


    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i=0;i<n;i++){
        if (temp[i] > max1) {
            max2 = max1;
            max1 = temp[i];
        } else if (temp[i] > max2 && temp[i] < max1) {
            max2 = temp[i]; 
        }
    }
    

    return 0;
}
