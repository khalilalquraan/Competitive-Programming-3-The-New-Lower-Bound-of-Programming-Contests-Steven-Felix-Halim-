#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T, C = 1;
    cin >> T;
    while(T--) {
        vector<pair<string, int>>vp;
        string x;
        int n, ma = 0;
        for(int i = 0; i < 10; i++) {
            cin >> x >> n;
            ma = max(ma, n);
            vp.push_back({x, n});
        }
        cout << "Case #" << C++ << ":" << endl;
        for(int i = 0; i < 10; i++)
            if(vp[i].second == ma)cout << vp[i].first << endl;

    }
}