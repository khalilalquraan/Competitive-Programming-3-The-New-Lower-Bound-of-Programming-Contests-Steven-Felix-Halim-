#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, c, C = 1;
    while(cin >> n >> m >> c) {
        if(n == 0 && m == 0 && c == 0)break;
        vector<bool>check(n, false);
        vector<int>capacity(n);
        for(int i = 0; i < n; i++)cin >> capacity[i];
        int max_power = 0, cur_power = 0;
        for(int i = 0, t; i < m; i++) {
            cin >> t;
            if(!check[t - 1]) {
                cur_power += capacity[t - 1];
                check[t - 1] = true;
                max_power = max(max_power, cur_power);

            } else {
                cur_power -= capacity[t - 1];
                check[t - 1] = false;
            }
        }
        if(max_power > c) {
            cout << "Sequence " << C++ << endl << "Fuse was blown." << endl << endl;
        } else {
            cout << "Sequence " << C++ << endl << "Fuse was not blown." << endl << "Maximal power consumption was " << max_power << " amperes." << endl << endl;
        }
    }
}
