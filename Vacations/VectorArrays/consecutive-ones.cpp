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

    int count =0;int maxcount=0;

    for(int i:temp){
        // cout<<"i:"<<(i==1);
        if(i==1){
            // cout<<"here";
            count++;
            if(count>maxcount){
                maxcount = count;
            }
        }
        else{
            count=0;
        }
    }

    cout<<"Max count:"<<maxcount;
    

    return 0;
}
