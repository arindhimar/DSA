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


    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(temp[mid]==0){
            swap(temp[low],temp[mid]);
            low++;
            mid++;
        }
        else if(temp[mid]==2){
            swap(temp[high],temp[mid]);
            high--;
            mid++;
        }
        else if(temp[mid]==1){
            mid++;
        }
    }

    display(temp);

    return 0;
}
