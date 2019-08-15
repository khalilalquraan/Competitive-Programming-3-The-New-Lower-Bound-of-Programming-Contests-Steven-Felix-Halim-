#include<bits/stdc++.h>
using namespace std;
int get(long long x) {
    int r = 0;
    while(x > 0) {
        r += x % 10;
        x /= 10;
    }
    return r;
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    while(cin >> T) {
        if(T == 0)break;
        long long n;
        n = T;
        long long ans = n;;
        while(n >= 10) {
            n = get(n);
        }
        cout << n << endl;
    }
}