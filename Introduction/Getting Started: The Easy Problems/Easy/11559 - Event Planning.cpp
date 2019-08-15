#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, bag, ho, week;
    while(cin >> n >> bag >> ho >> week) {
        vector<pair<int, int>>vp;
        while(ho--) {
            int x, co = 0;
            cin >> x;
            for(int i = 0; i < week; i++) {
                int t;
                cin >> t;
                co = max(co, t);
            }
            vp.push_back({x, co});
        }
        sort(vp.begin(), vp.end());
        bool f = false;
        for(int i = 0; i < vp.size(); i++) {
            if(vp[i].second >= n && n * vp[i].first <= bag) {
                cout << vp[i].first *n << endl;
                f = true;
                break;
            }
        }
        if(!f)cout << "stay home" << endl;

    }
}