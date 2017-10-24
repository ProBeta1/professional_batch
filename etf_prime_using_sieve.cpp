#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int lp[MAX];
void sieve()
{
    int i,j;
    for(i=2;i<MAX;++i)
    {
        if(!lp[i]) {
            for(j=i;j<MAX;j+=i)
            {
                lp[j] = i;
            }
        }
    }
}
int main()
{
    sieve();
    int n,i,q;
    cin>>q;
    while(q--) {
        cin>>n;
        int ans = n;
        while(n > 1) {
            int p = lp[n];
            int c = 0;
            while(n % p == 0) {
                n/=p;
                c++;
            }
            ans /= p;
            ans *= p-1;
        }
        cout << ans << endl;
    }
    return 0;
}

