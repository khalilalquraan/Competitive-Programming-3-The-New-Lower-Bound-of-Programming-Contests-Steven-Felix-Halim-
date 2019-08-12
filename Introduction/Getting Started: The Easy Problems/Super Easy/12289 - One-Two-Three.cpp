#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        if((x.find('o') != -1 && x.find('n') != -1) ||
                (x.find('o') != -1 && x.find('e') != -1) ||
                (x.find('n') != -1 && x.find('e') != -1))cout << 1 << endl;
        else if((x.find('t') != -1 && x.find('o') != -1) ||
                (x.find('t') != -1 && x.find('w') != -1) ||
                (x.find('w') != -1 && x.find('o') != -1))cout << 2 << endl;
        else cout << 3 << endl;
    }
}