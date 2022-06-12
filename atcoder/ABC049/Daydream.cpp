#include <bits/stdc++.h>
using namespace std;
 
bool erase_check(string s, int cur_ind) {
    string words;
    for (int i = cur_ind + 1; i <= cur_ind + 3; i++) {
        int alpha = s.at(i);
        words += alpha;
    }
 
    if (words == "ase") {
        return true;
    } else {
        return false;
    }
}
 
int main() {
 
    string s;
    cin >> s;
 
    string words;
    bool dreamer = false;
    bool eraser = false;
    int rem = s.size();
    for (int i = 0; i < s.size(); i++) {
 
        rem -= 1;
 
        char alpha = s.at(i);
        words += alpha;
 
        if (words == "dream") {
            if (rem >= 2) {
                if (s.at(i + 1) == 'e' && s.at(i + 2) == 'r') {
                    if (rem >= 5) {
                        bool erase_bool = erase_check(s, i + 2);
                        if(erase_bool) {
                            words = "";
                        }
                    } else {
                        dreamer = true;
                    }
                } else {
                    words = "";
                }
            } else {
                words = "";
            }
        }
 
        if (words == "erase") {
            if (rem >= 1) {
                if (s.at(i + 1) == 'r') {
                    eraser = true;
                } else {
                    words = "";
                }
 
            } else {
                words = "";
            }
        }
 
        if (words == "dreamer") {
            words = "";
        }
 
        if (words == "eraser") {
            words = "";
        }
    }
 
 
    if (words == "") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}