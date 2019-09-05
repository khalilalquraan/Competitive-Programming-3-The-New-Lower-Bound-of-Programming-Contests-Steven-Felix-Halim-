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
    string st;
    while(getline(cin, st)) {
        list<char>ls;
        list<char>::iterator it;
        it = ls.begin();
        for(int i = 0; i < st.size(); i++) {
            if(st[i] == '[')
                it = ls.begin();
            else if(st[i] == ']')
                it = ls.end();
            else
                ls.insert(it, st[i]);
        }
        for(it = ls.begin(); it != ls.end(); it++) {
            cout << *it;
        }
        cout << endl;
    }
}