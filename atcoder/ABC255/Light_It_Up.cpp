#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int i = 0; i < k; i++) cin >> a.at(i);

    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++) cin >> x.at(i) >> y.at(i);
    
    vector<double> vec_dist(n);
    double dist;
    for (int i = 0; i < n; i++) {
        vec_dist.at(i) = 1e18;
        for (int j = 0; j < k; j++) {
            double dx = x.at(i) - x.at(a.at(j)-1);
            double dy = y.at(i) - y.at(a.at(j)-1);
            dist = sqrt((dx * dx) + (dy * dy));
            vec_dist.at(i) = min(vec_dist.at(i), dist);
        }
    }

    double ans = 0;
    for (int i = 0; i < n; i++) ans = max(ans, vec_dist.at(i));

    printf("%.10f\n", ans);

    return 0;
}