#include <bits/stdc++.h>
using namespace std;

char change_direction(char direction) {

    if (direction == 'E') direction = 'S';
    else if (direction == 'S') direction = 'W';
    else if (direction == 'W') direction = 'N';
    else if (direction == 'N') direction = 'E';

    return direction;
}

tuple<int, int> after_coordinate(int x, int y, char direction) {

    if (direction == 'E') x += 1;
    else if (direction == 'S') y -= 1;
    else if (direction == 'W') x -= 1;
    else if (direction == 'N') y += 1;

    return {x, y};
} 

int main() {

    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    char direction = 'E';
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'S') {
            tie(x, y) = after_coordinate(x, y, direction);
        }
        if (s.at(i) == 'R') {
            direction = change_direction(direction);
        } 
    }

    cout << x << " " << y << endl;

    return 0;
}