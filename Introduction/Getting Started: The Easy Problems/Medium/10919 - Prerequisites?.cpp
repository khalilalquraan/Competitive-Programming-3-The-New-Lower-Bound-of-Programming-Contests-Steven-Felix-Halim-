#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int k, m;
    while(cin >> k) {
        if(k == 0)break;
        cin >> m;
        map<int, int>ma;
        int tmp;
        bool ans = true;
        for(int i = 0; i < k; i++) {
            cin >> tmp;
            ma[tmp] = 1;
        }
        for(int i = 0, c, min_cu; i < m; i++) {
            cin >> c >> min_cu;
            tmp = 0;
            for(int j = 0, tt; j < c; j++) {
                cin >> tt;
                tmp += ma[tt];
            }
            if(tmp < min_cu)ans = false;
        }
        if(ans)cout << "yes" << endl;
        else cout << "no" << endl;
    }
}