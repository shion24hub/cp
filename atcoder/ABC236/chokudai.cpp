#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    int a, b;
    cin >> a >> b;

    char temp = s.at(a - 1);
    s.at(a - 1) = s.at(b - 1);
    s.at(b - 1) = temp;

    cout << s << endl;


    return 0;
}