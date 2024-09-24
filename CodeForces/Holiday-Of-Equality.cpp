#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<int> burles;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        burles.push_back(temp);
    }

    int sum=0;

    int maxi=*max_element(burles.begin(),burles.end());

    for(int i=0;i<n;i++){
        sum+=maxi-burles[i];
    }

    cout<<sum;






    return 0;
}