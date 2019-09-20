#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool gr[10][10];
int ans[10], st[10];
vector<pair<int, int>>vp;
int lo = 1e9;
int anss = 1e9;
bool valid(int r, int c) {
    if(vp.empty())return true;
    for(int i = 0; i < vp.size(); i++) {
        if(r == vp[i].first || c == vp[i].second)return false;
        if(abs(r - vp[i].first) == abs(c - vp[i].second))return false;
    }
    return true;
}
void calc(int sum, int indx) {
    if(indx == 9 && lo > sum) {
        anss = sum;
        lo = 0;
        for(int i = 1; i <= 8; i++)lo += (ans[i] != st[i]);
        anss = min(anss, lo);
    }
    for(int i = 1; i <= 8; i++) {
        if(valid(i, indx)) {
            vp.push_back({i, indx});
            ans[indx] = i;
            calc(sum + (i != st[indx]), indx + 1);
            vp.pop_back();
        }
    }
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int C = 1;
    while(true) {
        vp.clear();
        anss = 1e9;
        lo = 1e9;
        string x;
        cin >> x;
        if(x.empty())break;
        for(int i = 0; i <= 9; i++)st[i] = 0;
        st[1] = stoi(x);
        for(int i = 2; i <= 8; i++)cin >> st[i];
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++) {
                gr[i][j] = false;
            }
        calc(0, 1);
        cout << "Case " << C++ << ": " << anss << endl;
    }
}