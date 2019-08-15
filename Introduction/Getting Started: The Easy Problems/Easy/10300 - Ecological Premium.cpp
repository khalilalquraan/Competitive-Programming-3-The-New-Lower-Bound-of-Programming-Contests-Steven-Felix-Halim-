#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    long long ans = 0;
    while(T--) {
        int n;
        cin >> n;
        ans = 0;
        while(n--) {
            long long a, b, c;
            cin >> a >> b >> c;
            ans += (a*c);
        }
        cout << ans << endl;
    }


}