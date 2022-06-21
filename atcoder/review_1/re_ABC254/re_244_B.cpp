#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string t;
    cin >> n >> t;

    char direction = 'E';
    vector<int> coor(2, 0);

    for (char operation : t) {
        if (operation == 'S') {
            if (direction == 'E') coor.at(0) += 1;
            if (direction == 'W') coor.at(0) -= 1;
            if (direction == 'N') coor.at(1) += 1;
            if (direction == 'S') coor.at(1) -= 1;
        }

        if (operation == 'R') {
            if (direction == 'E') direction = 'S';
            else if (direction == 'S') direction = 'W';
            else if (direction == 'W') direction = 'N';
            else if (direction == 'N') direction = 'E';
            
        }
    }

    cout << coor.at(0) << " " << coor.at(1) << endl;



    return 0;
}