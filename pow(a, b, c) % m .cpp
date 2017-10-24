/*
    FERMATS LITTLE THEOREM
    
    MOD_POW(A, -1, M) = MOD_POW(A, M-2, M);
    
    MOD_POW(A, POW(B, C), M) =    MOD_POW(A, R, M); // R = MOD_POW(B, C, M-1)
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll pow_(ll a, ll b, ll m)
{
    ll ans = 1;
    a = a % m;
    while (b) {
        if (b&1) ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    cout << pow_(a, pow_(b, c, m-1), m) << endl;
    
    return 0;
}
