#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool ans_upper = false;
    bool ans_lower = false;
    bool ans_diff = false;
    map<char, int> counter;
    for (int i = 0; i < s.size(); i++) {
        char alpha = s.at(i);
        if (isupper(alpha)) ans_upper = true;
        if (islower(alpha)) ans_lower = true;

        if(counter.count(alpha)) counter[alpha] += 1;
        else counter[alpha] = 1;
    }

    if (counter.size() == s.size()) ans_diff = true;
    
    if (ans_upper && ans_lower && ans_diff) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}