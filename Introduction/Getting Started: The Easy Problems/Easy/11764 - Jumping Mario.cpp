#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T, C = 1;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        int tall = 0, low = 0;
        for(int i = 0; i < n - 1; i++) {
            if(v[i] < v[i + 1])tall++;
            else if(v[i] > v[i + 1])low++;
        }
        cout << "Case " << C++ << ":" << " " << tall << " " << low << endl;
    }
}