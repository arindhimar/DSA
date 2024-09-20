#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    

    int c=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i*i)+j==n||i+(j*j)==m){
                c++;
            }
        }
    }

    cout<< c;


    return 0;
}