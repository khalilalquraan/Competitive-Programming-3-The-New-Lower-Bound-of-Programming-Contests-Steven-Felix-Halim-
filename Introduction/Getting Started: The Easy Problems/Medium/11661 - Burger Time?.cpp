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
    while(cin >> n) {
        if(n == 0)break;
        int D = -1, R = -1, ans = 1e9;
        string x;
        cin >> x;
        for(int i = 0; i < x.size(); i++) {
            if(x[i] == 'R' && D != -1) {
                R = i;
                ans = min(ans, abs(R - D));
            } else if(x[i] == 'R') {
                R = i;
            } else if(x[i] == 'D' && R != -1) {
                D = i;
                ans = min(ans, abs(R - D));
            } else if(x[i] == 'D') {
                D = i;
            } else if(x[i] == 'Z')ans = 0;
        }
        cout << ans << endl;
    }
}