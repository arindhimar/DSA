#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int totalTime = 240 - k;
    int count = 0;

    int reqTime = n;
    for(int i=1;i<n;i++){
        if(i*n<=totalTime){
            count++;
        }
        else{
            cout<<count;
            return 0;
        }
    }

    


    return 0;
}