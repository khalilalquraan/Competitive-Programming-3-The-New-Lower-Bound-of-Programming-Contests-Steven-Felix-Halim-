#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string x;
    int i = 1;
    while(cin >> x) {
        if(x == "#")break;
        if(x == "HELLO")
            printf("Case %d: ENGLISH\n", i);
        else if(x == "HOLA")
            printf("Case %d: SPANISH\n", i);
        else if(x == "HALLO")
            printf("Case %d: GERMAN\n", i);
        else if(x == "BONJOUR")
            printf("Case %d: FRENCH\n", i);
        else if(x == "CIAO")
            printf("Case %d: ITALIAN\n", i);
        else if(x == "ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n", i);
        else
            printf("Case %d: UNKNOWN\n", i);
        i++;
    }
}