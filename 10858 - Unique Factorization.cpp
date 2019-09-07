#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 998244353
using namespace std;
vector<vector<int>>v;
int a[300], C = 0;
void Unique_Factorization(int n, int counter, int last) {
    if(n == 1) {
        if(counter == 1)return;
        vector<int>T;
        for(int i = 0; i < counter; i++) {
            T.push_back(a[i]);
        }
        v.push_back(T);
        return ;
    }
    for(int i = last; i <= n; i++) {
        if(n % i == 0) {
            a[counter] = i;
            Unique_Factorization(n / i, counter + 1, i);
        }
    }
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    while(cin >> n) {
        C = 0;
        if(n == 0)break;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        v.clear();
        Unique_Factorization(n, 0, 2);
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v[i].size(); j++) {
                cout << v[i][j];
                if(j != v[i].size() - 1)cout << " ";
            }
            cout << endl;
        }
    }
}