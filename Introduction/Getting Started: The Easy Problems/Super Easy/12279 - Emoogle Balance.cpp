#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x, c = 1;
    while(cin >> x) {
        if(!x)break;
        int a = 0, b = 0;
        for(int i = 0, t; i < x; i++) {
            cin >> t;
            if(t > 0)a++;
            else b++;
        }
        printf("Case %d: %d\n", c++, a - b );
    }
}