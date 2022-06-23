#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string abc;
    cin >> abc;

    vector<int> nums;

    for (char num_str : abc) {
        int num = num_str - '0';
        nums.push_back(num);
    }

    int num_1 = nums.at(0) * 100 + nums.at(1) * 10 + nums.at(2);
    int num_2 = nums.at(1) * 100 + nums.at(2) * 10 + nums.at(0);
    int num_3 = nums.at(2) * 100 + nums.at(0) * 10 + nums.at(1);

    cout << num_1 + num_2 + num_3 << endl;

    return 0;
}