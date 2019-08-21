#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string x;
    int C = 1;
    while(cin >> x) {
        if(x == "0 0")break;
        cout << "Case " << C++ << ":" << endl;
        int n;
        cin >> n;
        vector<int>v(x.length(), 0);
        v[0] = x[0] - '0';
        for(int i = 1; i < x.length(); i++) {
            v[i] += v[i - 1] + x[i] - '0';
        }
        for(int i = 0, a, b; i < n; i++) {
            cin >> a >> b;
            if(a==b){cout<<"Yes"<<endl;}
            else if((min(a, b) == 0 && v[max(b, a)] == b) || v[max(b, a)] == 0)cout << "Yes" << endl;
            else if(a == 0)cout << "No" << endl;
            else if((a != 0 && v[max(b, a)] - v[min(a, b) - 1] == abs(b - a) + 1) || v[max(b, a)] - v[min(a, b) - 1] == 0)cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
