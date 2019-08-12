#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char x;
    bool f = true;
    while(getline(cin, x)) {
        for(auto s : x) {
            if(s == '"' && f) {
                cout << "``";
                f = !f;
            } else if(s == '"' && !f) {
                cout << "''";
                f = !f;
            } else cout << s;
        }
        cout << endl;

    }
}