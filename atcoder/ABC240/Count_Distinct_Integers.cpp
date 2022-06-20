#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++) cin >> a.at(i);

    map<int, int> counter;

    for (int i = 0; i < n; i++) {
        int num = a.at(i);
        if (counter.count(num)) counter[num] += 1;
        else counter[num] = 1;  
    }

    cout << counter.size() << endl;

    return 0;
}