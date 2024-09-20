#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;

    set <char> st;

    for(int i=0;i<s.length();i++){
        st.insert(s[i]);
    }
    c = st.size();
    cout<<c;

    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}