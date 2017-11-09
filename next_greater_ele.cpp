#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],nxt[n];
    for(int i = 0; i < n; i++) {
        cin >>a[i];
    }
    stack <int> s;
    for(int i = n - 1; i >= 0; i--) {
        while(s.empty() == false && a[i] >= s.top()) {
            s.pop();
        }
        if(s.empty()) {
            nxt[i] = -1;
        }
        else {
            nxt[i] = s.top();
        }
        s.push(a[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << nxt[i] << " ";
    }
    cout << endl;
    return 0;
}
