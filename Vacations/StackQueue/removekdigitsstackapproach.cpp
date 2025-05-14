#include <bits/stdc++.h>
using namespace std;

int main() {
    string temp;
    cin >> temp;
    int k;
    cin >> k;

    stack<int> st;

    if(temp.size()<=k){
        cout<<"0";
        return 0;
    }

    int count=0;
    for (char s : temp) {
        if (s != ' ') {
            int ele = s-'0';
            while(!st.empty()&&st.top()>ele){
                if(count<k){
                    st.pop();
                    count++;
                }
                else{
                    break;
                }
            }
            st.push(ele);
        }
    }

    while(count<k){
        st.pop();
        count++;
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    //just rev with no trailing zeros
   
    return 0;
}

