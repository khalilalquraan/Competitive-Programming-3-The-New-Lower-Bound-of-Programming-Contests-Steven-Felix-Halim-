#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    while(cin >> n >> m) {
        if(n == 0)break;
        ll ans = 0, max0;
        vector<ll>v(m);
        for(int i = 0; i < m; i++) {
            cin >> v[i];
        }
        max0 = v[0];
        for(int i = 0; i < m - 1; i++) {
            if(v[i] > v[i + 1]) {
                ans += v[i] - v[i + 1];
                max0 = max(max0, v[i]);
            } else if(v[i + 1] > max0) {
                ans += v[i + 1] - max0;
                max0 = v[i + 1];
            }
        }
        ans += n - max0;
        cout << ans << endl;
    }
}