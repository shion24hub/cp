#include <bits/stdc++.h>
using namespace std;

int main() {
    
    while (true) {
        int a, b;
        cin >> a >> b;

        if (cin.eof()) break;

        int sum = a + b;
        int counter = 0;
        while (sum != 0) {
            sum /= 10;
            counter++;
        }

        cout << counter << endl;
    }
}