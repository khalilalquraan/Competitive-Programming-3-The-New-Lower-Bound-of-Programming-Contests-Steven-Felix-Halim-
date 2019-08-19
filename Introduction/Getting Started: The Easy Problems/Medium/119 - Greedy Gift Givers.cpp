#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, C = 0;
    while(cin >> n) {
        if(C++ != 0)cout << endl;
        int ss = n;
        vector<string>st(n);
        vector<int>val(n, 0), lost(n, 0);
        for(int i = 0; i < n; i++)cin >> st[i];
        while(n--) {
            string x;
            int indx, val1, div;
            cin >> x >> val1 >> div;
            if(div == 0)continue;
            for(int j = 0; j < ss; j++) if(x == st[j])indx = j;
            val[indx] -= (val1 / div * div);
            int gi = val1 / div;
            int sss = div;
            while(sss--) {
                cin >> x;
                for(int j = 0; j < ss; j++)if(st[j] == x)
                        val[j] += gi;

            }
        }
        for(int i = 0; i < ss; i++)
            cout << st[i] << " " <<  val[i] << endl;
       // cout << endl;
    }
}