#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    while(T--) {
        long long a, b;
        cin >> a >> b;
        if(a > b)cout << ">" << endl;
        else if(a < b)cout << "<" << endl;
        else cout << "=" << endl;
    }
}