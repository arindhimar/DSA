#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    

    while(t>0){
        int n;//total fruits
        cin>>n;

        int blenderCapacity,userCapacity;

        cin>>blenderCapacity>>userCapacity;

        int possibleCapacity = min(blenderCapacity,userCapacity);

        // cout<<"=="<<possibleCapacity<<"==";

        int sol = n/possibleCapacity;



        int leftOver = n%possibleCapacity;

        if(leftOver!=0) sol++;

        cout<<sol<<endl;
        
        t--;
    }
    return 0;
}