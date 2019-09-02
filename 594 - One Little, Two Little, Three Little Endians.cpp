#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 998244353
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    while(scanf("%d", &n) == 1) {
        int y = 0;
        for(int i = 0; i < 4; i++) {
            y = (y << 8) | (n >> (8 * i) & 255);
        }
        printf("%d converts to %d\n", n, y );
    }
}