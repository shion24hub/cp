#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    int ans = 0;
    for (int bit = 0; bit < pow(2, n); bit++) {
        map<char, int> count_alpha;
        for (int shift = 0; shift < n; shift++) {
            if (bit & (1 << shift)) {
                string alphas = s.at(shift);
                //cout << alphas << " ";
                for (int i = 0; i < alphas.size(); i++) {
                    char alpha = alphas.at(i);
                    if (count_alpha.count(alpha)) {
                        count_alpha[alpha] += 1;
                    } else {
                        count_alpha[alpha] = 1;
                    }
                }
            }
        }
        int counter = 0;
        for (auto p: count_alpha) {
            //auto key = p.first;
            auto value = p.second;
            //cout << key << " => " << value << endl;
            if (value == k) {
                counter += 1;
            }
        }
        if (ans < counter) {
            ans = counter;
        }
        //cout << endl;
    }

    cout << ans << endl;

    return 0;
}