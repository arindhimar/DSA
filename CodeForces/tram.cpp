#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap=0;
    int stops;
    int maxi=0;
    cin>>stops;

    for(int i=0;i<stops;i++){
        int enter,getoff;

        cin>>enter>>getoff;

        cap +=enter;
        cap-=getoff;
        if(cap<0)cap=0;

        maxi =  max(maxi,cap);

    }

    cout<<maxi;

    return 0;
}