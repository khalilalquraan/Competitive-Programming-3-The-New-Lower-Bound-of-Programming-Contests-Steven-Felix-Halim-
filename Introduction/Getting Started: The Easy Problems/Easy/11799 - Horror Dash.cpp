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
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            ans = max(ans, tmp);
        }
        printf("Case %d: %d\n", C++, ans);
    }
}