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
    map<int, string>w;
    int c = 1;
    for(int i = 2; i < 10; i++) {
        string xx = "";
        xx += char(i + '0');
        xx += " of Clubs";
        w[c++] = xx;
    }
    w[c++] = "10 of Clubs";
    w[c++] = "Jack of Clubs";
    w[c++] = "Queen of Clubs";
    w[c++] = "King of Clubs";
    w[c++] = "Ace of Clubs";
    for(int i = 2; i <= 9; i++) {
        string xx = "";
        xx += char(i + '0');
        xx += " of Diamonds";
        w[c++] = xx;
    }
    w[c++] = "10 of Diamonds";
    w[c++] = "Jack of Diamonds";
    w[c++] = "Queen of Diamonds";
    w[c++] = "King of Diamonds";
    w[c++] = "Ace of Diamonds";
    for(int i = 2; i < 10; i++) {
        string xx = "";
        xx += char(i + '0');
        xx += " of Hearts";
        w[c++] = xx;
    }
    w[c++] = "10 of Hearts";
    w[c++] = "Jack of Hearts";
    w[c++] = "Queen of Hearts";
    w[c++] = "King of Hearts";
    w[c++] = "Ace of Hearts";
    for(int i = 2; i < 10; i++) {
        string xx = "";
        xx += char(i + '0');
        xx += " of Spades";
        w[c++] = xx;
    }
    w[c++] = "10 of Spades";
    w[c++] = "Jack of Spades";
    w[c++] = "Queen of Spades";
    w[c++] = "King of Spades";
    w[c++] = "Ace of Spades";
    int T;
    cin >> T;
    string test;
    getline(cin, test);
    while(T--) {
        int shuff[101][52];
        int cur[52];
        for(int i = 0; i < 52; i++)cur[i] = i;
        // for(int i = 0; i < 52; i++)shuff[0][i] = i + 1;
        //getline(cin, test);
        int shuffles;
        cin >> shuffles;
        for(int i = 0; i < shuffles; i++) {
            for(int j = 0; j < 52; j++) {
                cin >> shuff[i][j];
                shuff[i][j]--;
            }
        }
        string x;
        getline(cin, x);
        int cc=1;
        while(getline(cin, x)) {
            int t;
            if(x.size() == 0)break;
            t = stoi(x);
            int tmp[52];
            for(int i = 0; i < 52; i++) {
                tmp[i] = cur[shuff[t - 1][i]];
            }
            for(int i = 0; i < 52; i++) {
                cur[i] = tmp[i];
            }
        }
        for(int i = 0; i < 52; i++) cout << w[cur[i] + 1] << endl;
        if(T!=0)cout << endl;
    }

}