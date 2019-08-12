#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, C = 1;
    cin >> t;
    while(t--) {
        int H, W, L;
        cin >> H >> W >> L;
        if(H <= 20 && W <= 20 && L <= 20)
            printf("Case %d: good\n", C++ );
        else
            printf("Case %d: bad\n", C++ );
    }
}