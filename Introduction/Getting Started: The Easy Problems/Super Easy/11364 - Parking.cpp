#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int tmp1 = 0;
            for(int j = i; j < n - 1; j++) {
                tmp1 += v[j + 1] - v[j];
            }
            tmp1 += v[n - 1] - v[0];
            for(int j = 0; j < i - 1; j++) {
                tmp1 += v[j + 1] - v[j];
            }
            //cout << tmp1 << endl;
            ans = max(ans, tmp1);
        }
        cout << ans << endl;
    }
}