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
        //cout << t << endl;;
        int n, up, down, t;
        cin >> n;
        bool ans = true;
        cin >> up >> down;
        t = up - down;
        for(int i = 0; i < n - 1; i++) {
            cin >> up >> down;
            if(t != up - down)ans = false;
        }
        if(ans)cout << "yes" << endl;
        else cout << "no" << endl;
        if(T!= 0)cout << endl;

    }
}