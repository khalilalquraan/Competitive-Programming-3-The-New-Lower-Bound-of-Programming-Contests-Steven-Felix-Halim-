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
    int T, C = 1;
    cin >> T;
    while(T--) {
        int Y = 0;
        stack<string>st;
        for(int i = 0; i < 52; i++) {
            string x;
            cin >> x;
            st.push(x);
            if(i == 24) {
                for(int h = 0; h < 3; h++) {
                    int xx;
                    if(st.top()[0] >= '2' && st.top()[0] <= '9') {
                        xx = st.top()[0] - '0';
                        st.pop();
                    } else {
                        xx = 10;
                        st.pop();
                    }
                    Y += xx;
                    for(int i = 0; i < 10 - xx; i++) st.pop();
                }
            }
        }
        vector<string>v(st.size());
        int indx = st.size() - 1;
        while(!st.empty()) {
            v[indx--] = st.top();
            st.pop();
        }
        cout << "Case " << C++ << ": " << v[Y - 1] << endl;
    }
}