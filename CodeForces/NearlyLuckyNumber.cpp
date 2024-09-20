#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    int count = 0;

    while(n>0){
        long long val = n%10;
        if(val==4||val==7){
            count++;
        }

        n=n/10;
    }

    if(count==4||count==7)cout<<"YES";else cout<<"NO";

    return 0;
}