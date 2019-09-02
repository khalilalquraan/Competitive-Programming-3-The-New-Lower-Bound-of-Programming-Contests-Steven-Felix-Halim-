#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 998244353
using namespace std;
int ans = 0, T = 1, C = 0;
bool check[1025];
int calc(int a) {
    if(a == 0) {
        return check[T++];
    }
    bool rec = false;
    bool b1 = calc(a - 1);
    bool b2 = calc(a - 1);
   // cout << a << " " << b1 << " " << b2 << endl;
    ans += (b1 + b2 == 1);
    return b1 || b2;
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--) {
        T = 1;
        ans = 0;
        for(int i = 0; i <= 1024; i++)check[i] = true;
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < m; i++) {
            int x;
            cin >> x;
            check[x] = false;
        }
        calc(n );
        cout << ans << endl;
    }
}