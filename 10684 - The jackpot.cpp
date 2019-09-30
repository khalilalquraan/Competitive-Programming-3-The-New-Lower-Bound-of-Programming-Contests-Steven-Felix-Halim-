#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    while(scanf("%d", &n), n) {
        int x, ans = 0, tmp = 0;
        for(int i = 0; i < n; i++) {
            cin >> x;
            tmp += x;
            ans = max(ans, tmp);
            tmp = max(tmp, 0);
        }
        if (ans > 0)
            printf("The maximum winning streak is %d.\n", ans);
        else
            printf("Losing streak.\n");
    }
}