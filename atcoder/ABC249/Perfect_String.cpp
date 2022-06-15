#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    bool flag_up = false;
    bool flag_low = false;
    bool flag_uni = true;
    for (int i = 0; i < s.size(); i++) {

        char alpha = s.at(i);

        if (isupper(alpha)) {
            flag_up = true;
        }

        if (islower(alpha)) {
            flag_low = true;
        }

        for (int j = 0; j < s.size(); j++) {
            if (i != j){
                if (s.at(i) == s.at(j)) {
                    flag_uni = false;
                    break;
                }
            }
        }
    }

    if (flag_up && flag_low && flag_uni) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}