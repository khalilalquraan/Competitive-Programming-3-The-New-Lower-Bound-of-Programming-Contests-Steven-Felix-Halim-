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
    map<string, int>w, A;
    A["N"] = 0, A["E"] = 1, A["S"] = 2, A["W"] = 3;
    map<int, string>back;
    int c = 0;
    for(int i = 2; i <= 9; i++) {
        string xx = "";
        xx += 'C';
        xx += char(i + '0');
        w[xx] = c++;
        back[w[xx]] = xx;
    }
    w["CT"] = c++;
    back[w["CT"]] = "CT";
    w["CJ"] = c++;
    back[w["CJ"]] = "CJ";
    w["CQ"] = c++;
    back[w["CQ"]] = "CQ";
    w["CK"] = c++;
    back[w["CK"]] = "CK";
    w["CA"] = c++;
    back[w["CA"]] = "CA";
    for(int i = 2; i <= 9; i++) {
        string xx = "";
        xx += 'D' ;
        xx += char(i + '0');
        w[xx] = c++;
        back[w[xx]] = xx;
    }
    w["DT"] = c++;
    back[w["DT"]] = "DT";
    w["DJ"] = c++;
    back[w["DJ"]] = "DJ";
    w["DQ"] = c++;
    back[w["DQ"]] = "DQ";
    w["DK"] = c++;
    back[w["DK"]] = "DK";
    w["DA"] = c++;
    back[w["DA"]] = "DA";
    for(int i = 2; i <= 9; i++) {
        string xx = "";
        xx += 'S' ;
        xx += char(i + '0');
        w[xx] = c++;
        back[w[xx]] = xx;
    }
    w["ST"] = c++;
    back[w["ST"]] = "ST";
    w["SJ"] = c++;
    back[w["SJ"]] = "SJ";
    w["SQ"] = c++;
    back[w["SQ"]] = "SQ";
    w["SK"] = c++;
    back[w["SK"]] = "SK";
    w["SA"] = c++;
    back[w["SA"]] = "SA";
    for(int i = 2; i <= 9; i++) {
        string xx = "" ;
        xx += 'H' ;
        xx += char(i + '0');
        w[xx] = c++;
        back[w[xx]] = xx;
    }
    w["HT"] = c++;
    back[w["HT"]] = "HT";
    w["HJ"] = c++;
    back[w["HJ"]] = "HJ";
    w["HQ"] = c++;
    back[w["HQ"]] = "HQ";
    w["HK"] = c++;
    back[w["HK"]] = "HK";
    w["HA"] = c++;
    back[w["HA"]] = "HA";
    string x;
    while(cin >> x) {
        vector<int>ans[4];
        if(x == "#")break;
        int indx = A[x] + 1;
        indx = indx % 4;
        for(int i = 0; i < 52; i++) {
            char a, b;
            cin >> a >> b;
            string xx = "";
            xx += a;
            xx += b;
            ans[indx].push_back(w[xx]);
            indx++;
            indx %= 4;
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        sort(ans[2].begin(), ans[2].end());
        sort(ans[3].begin(), ans[3].end());
        cout << "S:";
        for(int i = 0; i < 13; i++)cout << " " << back[ans[2][i]] ;
        cout << endl;
        cout << "W:";
        for(int i = 0; i < 13; i++)cout << " " << back[ans[3][i]] ;
        cout << endl;
        cout << "N:";
        for(int i = 0; i < 13; i++)cout << " " << back[ans[0][i]] ;
        cout << endl;
        cout << "E:";
        for(int i = 0; i < 13; i++)cout << " " << back[ans[1][i]] ;
        cout << endl;
    }
}