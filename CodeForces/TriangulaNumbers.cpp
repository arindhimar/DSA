#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sol=(n*(n+1)/2);

    for(int i=0;i<=sol;i++){
    int temp=(i*(i+1)/2);

    // cout<<temp;
    if(n==temp){
        cout<<"YES";
        return 0;
    }
    }




    cout<<"NO";

    return 0;
}