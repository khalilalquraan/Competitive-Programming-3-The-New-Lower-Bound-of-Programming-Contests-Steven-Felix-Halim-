#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int get(int s) {
    if(s < 10)return s;
    int a = 0;
    while(s > 0) {
        a += s % 10;
        s /= 10;
    }
    return get(a);
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s1, s2;
    while(getline(cin, s1) && getline(cin, s2)) {
        int a1 = 0, a2 = 0;
        for(auto s : s1) {
            if(tolower(s) >= 'a' && tolower(s) <= 'z')
                a1 += tolower(s) - 'a' + 1;
        }
        for(auto s : s2) {
            if(tolower(s) >= 'a' && tolower(s) <= 'z')
                a2 += tolower(s) - 'a' + 1;
        }
        a1 = get(a1);
        a2 = get(a2);
        printf("%.2f %%\n", min(a1, a2) * 100.0 / max(a1, a2) );
    }
}