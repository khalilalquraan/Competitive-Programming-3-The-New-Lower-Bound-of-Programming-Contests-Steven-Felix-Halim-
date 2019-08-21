#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    string xx;
    getline(cin, xx);
    while(n--) {
        bool ans = true;
        string x, tmp;
        getline(cin, x);
        int MM = 0, FF = 0, MF = 0;
        for(auto s : x)
            if(s != ' ')tmp += s;
        for(int i = 0; i < tmp.size() - 1; i++) {
            if(tmp[i] == tmp[i + 1] && tmp[i] == 'F')FF++;
            else if(tmp[i] == tmp[i + 1])MM++;
            else MF++;
            i++;
        }
        //cout << tmp << endl;
        if(FF != MM || (FF == 0 && FF == MM && MF == 1))ans = false;
        if(ans)cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }

}