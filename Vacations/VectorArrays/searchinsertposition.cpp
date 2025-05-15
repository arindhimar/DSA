#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &temp){
    for(int i=0;i<temp.size();i++){
        cout<<temp.at(i)<<" ";
    }
}

void searchInsertPosition(vector<int> &temp,int n){
    int toInsert ;
    cout<<"To insert";
    cin>>toInsert;

    int ans=n,mind;
    int low=0,high=n-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(temp[mid]>=toInsert){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }

    cout<<ans;
    
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


    sort(temp.begin(),temp.end());

    searchInsertPosition(temp,n);
    

    return 0;
}
