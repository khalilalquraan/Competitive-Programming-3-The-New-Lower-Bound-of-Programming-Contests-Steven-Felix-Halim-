#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    double bor, month, firstpay, rempay, n;
    while(cin >> month >> firstpay >> rempay >> n) {
        if(month < 0)break;
        double a[102];
        //cout << n << endl;
        for(int i = 0; i <= 101; i++)a[i] = 0;
        while(n--) {
            int f;
            double l;
            cin >> f >> l;
            //cout << f << endl;
            for(int i = f; i <= 101; i++) {
                a[i] = (1 - l);
                //cout << a[i] << endl;
            }
        }
        double val_car = (firstpay + rempay) * (a[0]);
        double payment = rempay / (month + 0.0);
        double rem = rempay;
        //cout << month << endl;
        for(int i = 1; i <= month; i++) {
            if(rem < val_car) {
                if(i != 2)cout << i - 1 << " months" << endl;
                else cout << i - 1 << " month" << endl;
                break;
            } else if(i == month) {
                cout << month << " months" << endl;
            }
            //cout << a[i] << endl;
            val_car = val_car * a[i];
            rem -= payment;
        }
    }

}