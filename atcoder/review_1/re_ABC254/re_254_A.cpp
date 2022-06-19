#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int rem1, rem2;
    rem1 = n % 10;
    n = n / 10;
    rem2 = n % 10;

    cout << rem2 << rem1 << endl;
    
    return 0;
}