#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &temp){
    for(int i=0;i<temp.size();i++){
        cout<<temp.at(i)<<" ";
    }
}

void lowerbound(vector<int> &temp,int target){
    int low  = 0,n=temp.size(),high=n-1;
    int lb;
    while(low<=high){
        int mid= (low+high)/2;

        if(temp[mid]>target){//may be this one is lb
            lb = mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }

    cout<<lb;
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


    

    return 0;
}
