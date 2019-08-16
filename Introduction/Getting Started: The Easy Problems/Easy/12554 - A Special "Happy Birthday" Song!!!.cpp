#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string party[] = {
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you"
    };
    int n;
    cin >> n;
    string *people = new string[n];
    for(int i = 0; i < n; i++)
        cin >> people[i];
    int p = max(n, 16);
    if(p != 16) {
        p = ceil(p / 16.0) * 16;
    }
    for(int i = 0; i < p ; i++) {
        cout << people[i % n] << ": " << party[i % 16] << endl;
    }
}