#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string newStr="";

    for(int i=0;i<str.length();i++){
        if(str[i]=='-'){
            if(str[i+1]=='-'){
                newStr+='2';
            }
            else {
                newStr+='1';
            }
            i=i+1;
        }
        else{
            newStr+='0';
        }
    }

    cout<<newStr;

    return 0;
}