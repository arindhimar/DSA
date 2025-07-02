#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> um;

    for(int i=0;i<10;i++){
        um[i]++;
    }


    //Their platform
    // for(auto [key,val]:um){
    //     cout<<key<<"=="<<val<<endl;
    // }
    
    
    // for (const pair<int, int> kv : um) {
    //     cout << kv.first << "==" << kv.second << endl;
    // }

    for (auto it = um.begin(); it != um.end(); it++) {
        cout << it->first << "==" << it->second << endl;
    }



    return 0;
}