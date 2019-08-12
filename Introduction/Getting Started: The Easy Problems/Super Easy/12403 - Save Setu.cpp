#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, C = 1, ac = 0;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        if(x == "donate") {
            cin >> C;
            ac += C;
        } else cout << ac << endl;
    }
}