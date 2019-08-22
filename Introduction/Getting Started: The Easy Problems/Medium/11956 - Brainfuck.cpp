#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T, C = 1;
    scanf("%d", &T);
    while(T--) {
        char input[100001];
        int mem[101], current = 0;
        scanf("%s", input);
        for(int i = 0; i < 100; i++)mem[i] = 0;
        for(int i = 0; input[i]; i++) {
            if(input[i] == '<') {
                current--;
                if(current == -1)current = 99;
            } else if(input[i] == '>') {
                current++;
                if(current == 100)current = 0;
            } else if(input[i] == '+') {
                mem[current]++;
                if(mem[current] == 256)mem[current] = 0;
            } else if(input[i] == '-') {
                mem[current]--;
                if(mem[current] == -1)mem[current] = 255;
            }
        }
        printf("Case %d:", C++);
        for(int i = 0; i < 100; i++) {
            printf(" %02X", mem[i] );
        }
        puts("");
    }
}