#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //入力
    int n, q;
    cin >> n >> q;

    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x.at(i);
    }

    vector<int> list(n);
    vector<int> position(n);
    for (int i = 0; i < n; i++) {
        list.at(i) = i + 1;
        position.at(i) = i;
    }


    //処理
    for (int i = 0; i < q; i++) {

        int x_num = x.at(i);
        int list_num;
        int index;

        //listの中のx_numの場所を求めている。→TLEにつながる。
        for (int j = 0; j < n; j++) {
            if (list.at(j) == x_num) {
                index = j;
                list_num = list.at(j);
                break;
            }
        }

        if (index == n-1) {
            //右サイドの場合
            list.at(index) = list.at(index - 1);
            list.at(index - 1) = list_num;
        } else {
            list.at(index) = list.at(index + 1);
            list.at(index + 1) = list_num;
        }
 
    }

    //出力
    for (int i = 0; i < n; i++) {
        if (i != n-1) {
            cout << list.at(i) << " ";
        } else {
            cout << list.at(i) << endl;
        }
    }


    return 0;
}