//未完成

#include <bits/stdc++.h>
using namespace std;

// vector<int> devide_digits(int num) {
//     vector<int> nums(10);
//     for (int i = 0; i <= 10; i++) {
//         int quo = num / 10;
//         int rem = num % 10;
//     }
// }

int main() {

    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }



    vector<vector<char>> charas(n); 
    for (int i = 0; i < n; i++) {
        for (int j: s.at(i)) {
            charas.at(i).push_back(j);
        }
    }

    int ans = 100;
    for (int target = 0; target < 10; target++) {
        vector<int> index_save(n);
        int time_sum = 0;
        for (int reel = 0; reel < n; reel++) {
            for (int ind = 0; ind < 10; ind++) {
                char char_num = charas.at(reel).at(ind);
                int num = char_num - '0';
                if (num == target) {
                    //index_save.at(reel) = ind;
                    time_sum += ind;
                    // if (*find(index_save.begin(), index_save.end(), ind) != ind) {
                    //     time_sum += ind;
                    // } else {
                    //     time_sum += 8;
                    // }
                    break;
                }
            }
        }
        cout << time_sum << endl;
        if (ans > time_sum) {
            ans = time_sum;
        }
    }
    cout << ans << endl;

    return 0;
}