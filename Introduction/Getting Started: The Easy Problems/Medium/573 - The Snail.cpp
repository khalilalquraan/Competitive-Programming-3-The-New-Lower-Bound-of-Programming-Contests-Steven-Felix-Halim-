#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    double H, U, D, F;
    while(cin >> H >> U >> D >> F) {
        if(H == 0)break;
        double dec = U * (F / 100.0), curH = 0;
        int ans = 1;
        while(curH < H) {
            curH += U;
            if(U > 0)U -= dec;
            if(curH > H)break;
            curH -= D;
            if(curH < 0)break;
            ans++;

        }
        if(curH >= H) {
            cout << "success on day " << ans << endl;
        } else {
            cout << "failure on day " << ans << endl;
        }
    }

}
