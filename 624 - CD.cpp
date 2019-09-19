#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 998244353
using namespace std;
vector<int>ans, v;
vector<int>tmp;
int val_ans = 0, cc;
void calc(int i, int sum, int e) {
    if(sum > val_ans && sum <= cc) {
        ans.clear();
        for(int i = 0; i < tmp.size(); i++) {
            ans.push_back(tmp[i]);
        }
        val_ans = sum;
    }
    if(i == e)return;
    tmp.push_back(v[i]);
    calc(i + 1, sum + v[i], e);
    tmp.pop_back();
    calc(i + 1, sum, e);
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, m, t;
    while(true) {
        string x;
        v.clear();
        tmp.clear();
        ans.clear();
        val_ans = 0;
        cin >> x;
        if(x.empty())break;
        N = stoi(x);
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> t;
            v.push_back(t);
        }
        cc = N;
        calc(0, 0, m);
        int sum = 0;
        for(auto xx : ans)sum += xx;
        for(auto xx : ans)
            cout << xx << " ";
        cout << "sum:" << sum << endl;
    }
}