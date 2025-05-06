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

    


    display(temp);


    int d;

    cin>>d;


    d = d%n;

    vector<int> finalArr;

    finalArr.insert(finalArr.end(), temp.begin() + d, temp.end());
    finalArr.insert(finalArr.end(), temp.begin(), temp.begin() + d);

    display(finalArr);

    return 0;
}
