#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c1=0,c2=0;
    string str;
    cin>>str;
    for(auto ch:str)
    {
        if(ch=='A'){
            c1++;
        }
        else{
            c2++;
        }
    }

    if(c1>c2){
        cout<<"Anton";
    }
    else if(c2>c1){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}