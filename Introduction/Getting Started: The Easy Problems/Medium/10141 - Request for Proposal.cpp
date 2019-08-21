#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int nn, m, C = 1;
    while(cin >> nn >> m) {
        if(nn == 0 && m == 0)break;
        if(C != 1)cout << endl;
        string aaa;
        getline(cin, aaa);
        for(int i = 0; i < nn; i++) {
            string x;
            getline(cin, x);
            // cout << x << endl;
        }
        string ans;
        double x = 1e9, n = 0;
        for(int i = 0; i < m; i++) {
            string t;
            double pr, num;
            getline(cin, t);
            cin >> pr >> num;
            //cout << pr << endl;
            string bbb;
            getline(cin, bbb);
            for(int i = 0; i < num; i++) {
                string xxx;
                getline(cin, xxx);
            }
            if(num > n) {
                ans = t;
                n = num;
                x = pr;
            } else if(num == n && pr < x) {
                ans = t;
                x = pr;
            }
        }
        cout << "RFP #" << C++ << endl;
        cout << ans << endl;
    }


}