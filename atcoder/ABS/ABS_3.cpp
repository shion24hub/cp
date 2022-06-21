#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    
    string s;
    cin >> s;

    int counter = 0;
    for (int i = 0; i < 3; i++) {
        if (s.at(i) == '1') counter += 1;
    }

    cout << counter << endl;



    return 0;
}