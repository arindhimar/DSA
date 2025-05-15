#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &temp){
    for(int i=0;i<temp.size();i++){
        cout<<temp.at(i)<<" ";
    }
}

void binarySearch(vector<int> &temp,int target){
    int n = temp.size();
    int low = 0,high = n-1;

    while(low<=high){
        int mid = (low+high)/2;


        if(temp[mid]==target){
            cout<<"Index "<<mid;
            return;
        }
        else if(temp[mid]>target){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    cout<<"Not Found!!";
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


    int target;

    cout<<"Target :";
    cin>>target;

    sort(temp.begin(),temp.end());

    // display(temp);

    binarySearch(temp,target);
    

    return 0;
}
