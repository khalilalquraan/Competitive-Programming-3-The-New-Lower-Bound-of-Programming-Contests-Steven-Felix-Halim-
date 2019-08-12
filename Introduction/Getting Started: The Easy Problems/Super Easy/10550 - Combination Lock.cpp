#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i, a, b, c;
    while(cin >> i >> a >> b >> c) {
        if(i == 0 && a == 0 && b == 0 && c == 0)break;
        int ans = 1080;
        if(i > a) {
            ans += (i - a) * 9; 
        } else {
            ans += (40 - (a - i)) * 9;
        }
        if(a > b) {
            ans += (40 - (a - b)) * 9;
        } else  {
            ans += (b - a) * 9;
        }
        if(b > c) {
            ans += (b - c) * 9;
        } else {
            ans += (40 - (c - b)) * 9;
        }
        cout << ans << endl;
    }
}