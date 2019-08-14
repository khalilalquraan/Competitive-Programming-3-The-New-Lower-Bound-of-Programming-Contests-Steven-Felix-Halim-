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
        string x;
        cin >> x;
        if(x == "1" || x == "4" || x == "78")
            cout << "+" << endl;
        else if(x[x.size() - 1] == '5' && x[x.size() - 2] == '3')
            cout << "-" << endl;
        else if(x[0] == '9' && x[x.size() - 1] == '4')
            cout << '*' << endl;
        else cout << '?' << endl;
    }
}