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
    int n;
    while(cin >> n) {
        if(n == 0)break;
        int a = 0, b = 0;
        int ta = true;
        int val = 1;
        while(n) {
            if(n & 1) {
                if(ta)
                    a += val;
                else
                    b += val;
                ta = !ta;
            }
            val = (val << 1);
            n = (n >> 1);
        }
        cout << a << " " << b << endl;
    }
}