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
        int ans = 0;
        int *p = new int[n];
        string x;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x == "LEFT")p[i] = -1;
            else if(x == "RIGHT")p[i] = 1;
            else {
                string s;
                cin >> s;
                int po;
                cin >> po;
                p[i] = p[po - 1];
            }
            ans += p[i];
        }
        cout << ans << endl;
    }
}