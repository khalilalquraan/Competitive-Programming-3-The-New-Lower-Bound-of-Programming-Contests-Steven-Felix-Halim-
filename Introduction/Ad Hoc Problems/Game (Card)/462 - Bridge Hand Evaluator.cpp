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
    bool Queen[4], King[4], Ace[4], Jack[4], trump[4];
    int count[4], point, SpPoint, pos;
    map<char, int>m;
    m['s'] = 0, m['H'] = 1, m['D'] = 2, m['C'] = 3;
    char back[] = {'S', 'H', 'D', 'C'};
    char test[3];
    while(scanf("%s", test) == 1) {
        for(int i = 0; i < 4; i++) {
            Queen[i] = King[i] = Ace[i] = Jack[i] = trump[i] = false;
            count[i] = 0;
        }
        point = SpPoint = 0;
        for(int i = 0; i < 13; i++) {
            string in;
            if(i != 0)cin >> in;
            else in = test;
            pos = m[in[1]];
            if(in[0] == 'K') {
                King[pos] = true;
                point += 3;
            } else if (in[0] == 'A') {
                Ace[pos] = true;
                point += 4;
            } else if(in[0] == 'Q') {
                Queen[pos] = true;
                point += 2;
            } else if(in[0] == 'J') {
                Jack[pos] = true;
                point++;
            }
            count[pos]++;
        }
        for(int i = 0; i < 4; i++) {
            if(King[i] && count[i] < 2) {
                point--;
            } else if(King[i]) {
                trump[i] = true;
            }
            if(Ace[i])
                trump[i] = true;
            if(Queen[i] && count[i] < 3) {
                point--;
            } else if(Queen[i]) {
                trump[i] = true;
            }
            if(Jack[i] && count[i] < 4) {
                point--;
            }
            if(count[i] == 2) {
                SpPoint++;
            }  else if(count[i] < 2) {
                SpPoint += 2;
            }
        }
        if(trump[0] && trump[1] && trump[2] && trump[3] && point >= 16) {
            cout << "BID NO-TRUMP" << endl;
        } else if(SpPoint + point >= 14) {
            char ans = 'S';
            int c = 0;
            for(int i = 0; i < 4; i++) {
                if(count[i] > count[c]) {
                    c = i;
                    ans = back[i];
                }
            }
            cout << "BID " << ans << endl;
        } else {
            cout << "PASS" << endl;
        }
    }

}