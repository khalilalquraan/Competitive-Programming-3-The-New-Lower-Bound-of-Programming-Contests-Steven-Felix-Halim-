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
    int A[3], B[3];
    while(cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1]) {
        if(A[0] + A[1] + A[2] + B[0] + B[1] == 0)break;
        int tmp1[3], tmp2[3];
        bool ch = false;
        for(int i = 1; i <= 52; i++) {
            bool check = true;
            if(i == A[0] || i == A[1] || i == A[2] || i == B[0] || i == B[1])continue;
            tmp1[0] = A[0], tmp1[1] = A[1], tmp1[2] = A[2];
            tmp2[0] = B[0], tmp2[1] = B[1], tmp2[2] = i;
            sort(tmp1, tmp1 + 3);
            sort(tmp2, tmp2 + 3);
            do {
                do {
                    int c = 0;
                    if(tmp2[0] > tmp1[0])c++;
                    if(tmp2[1] > tmp1[1])c++;
                    if(tmp2[2] > tmp1[2])c++;
                    if(c < 2)check = false;
                } while(next_permutation(tmp2, tmp2 + 3));
            } while(next_permutation(tmp1, tmp1 + 3));
            if(check) {
                cout << i << endl;
                ch = true;
                break;
            }
        }
        if(!ch)cout << -1 << endl;

    }
}