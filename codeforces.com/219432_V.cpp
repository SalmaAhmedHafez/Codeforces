
/*
Author : Salma Hafez

0 0 0
0   0
0   0
0 0 0

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull unsigned long long
#define ll long long

#define int ll


ull INF = (1ULL << 32);

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //cout << fixed << setprecision(10);

    int n;
    cin >> n;
    for(int i = 1; i <= n*4; i++){
        if(i % 4 == 0)
            cout << "PUM" << endl;
        else 
            cout << i << " ";
    }
    return 0;
 }

