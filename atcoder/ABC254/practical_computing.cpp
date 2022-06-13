#include <bits/stdc++.h>
using namespace std;

vector<int> print_n(int i, int j, vector<int> pre_nums){

    vector<int> return_vec(i + 1);
    if(j == 0 || j == i) {
        return_vec.at(j) = 1;
    } else {
        return_vec.at(j) = pre_nums.at(j - 1) + pre_nums.at(j);
    }

    return return_vec;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> ans(n, vector<int>(n));
    vector<int> pre_nums(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            ans.at(i).at(j) = print_n(i, j, pre_nums);
        }
    }


}