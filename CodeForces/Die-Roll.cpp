#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;

    int max_val = max(Y, W);
    int numerator = 6 - max_val+1;
    int denominator = 6;

    int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    if (numerator == 0) {
        cout << "0/1" << endl;
    } else if (numerator == denominator) {
        cout << "1/1" << endl;
    } else {
        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}