#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    while(cin >> a >> b) {
        if(a == -1 && b == -1)break;
        cout << min({abs(a - b), 99 - a + b + 1, 99 - b + a + 1}) << endl;
    }
}