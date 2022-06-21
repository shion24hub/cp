#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    string word;
    for (char alpha: s) {
        word += alpha;
        if (word == "maerd" || word == "remaerd" || word == "esare" || word == "resare") {
            word = "";
        }
    }

    if (word.size() == 0) cout << "YES" << endl;
    else cout << "NO" << endl;



    return 0;
}