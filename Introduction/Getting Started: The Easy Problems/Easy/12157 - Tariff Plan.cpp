#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T, C = 1;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int mile = 0, juice = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x % 30 == 0) {
                mile += (x / 30 + 1) * 10;
            } else mile += ceil(x / 30.0) * 10;
            if(x % 60 == 0) {
                juice += (x / 60 + 1) * 15;
            } else juice += ceil(x / 60.0) * 15;
        }
        if(mile < juice)
            printf("Case %d: Mile %d\n", C++, mile);
        else if(mile > juice)
            printf("Case %d: Juice %d\n", C++, juice );
        else
            printf("Case %d: Mile Juice %d\n", C++, juice );
    }
}