#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n;
        int count = 0;
        bool isEven;
        int temp;
        
        cin >> temp;
        isEven = (temp % 2 == 0);
        
        for(int i = 1; i < n; i++){
            cin >> temp;
            bool currentIsEven = (temp % 2 == 0);
            if(currentIsEven == isEven){
                count++;
            } else {
                isEven = currentIsEven;
            }
        }
        
        cout << count << endl;
        t--;
    }
    return 0;
}
