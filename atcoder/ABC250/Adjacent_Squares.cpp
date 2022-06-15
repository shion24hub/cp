#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, w, r, c;
    cin >> h >> w >> r >> c;

    bool x_right, x_left, y_right, y_left;
    x_right = c + 1 <= w;
    x_left = c - 1 >= 1;
    y_right = r + 1 <= h;
    y_left = r - 1 >= 1;

    int counter = 0;
    if (x_right) {
        counter++;
    }
    if (x_left) {
        counter++;
    }

    if (y_right) {
        counter++;
    }

    if (y_left) {
        counter++;
    }
    
    cout << counter << endl;


    return 0;
}