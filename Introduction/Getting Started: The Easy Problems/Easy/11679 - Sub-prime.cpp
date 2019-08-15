#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int B, N;
    while(cin >> B >> N) {
        if(B == 0 && N == 0)break;
        vector<int>v(B, 0);
        for(int i = 0; i < B; i++) cin >> v[i];
        for(int i = 0; i < N; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            v[a - 1] -= c;
            v[b - 1] += c;
        }
        bool ans = true;
        for(int i = 0; i < B; i++)if(v[i] < 0)ans = false;
        if(ans)cout << "S" << endl;
        else cout << "N" << endl;

    }
}