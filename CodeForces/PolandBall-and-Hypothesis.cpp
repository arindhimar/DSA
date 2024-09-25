#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=1e3;i++){
        int temp = n * i + 1 ;
        if(!isPrime(temp)){
            cout<<i;
            return 0;
        }
    }
    return 0;
}