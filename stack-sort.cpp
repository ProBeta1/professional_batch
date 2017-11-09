#include <bits/stdc++.h>
using namespace std;

int a[1000], b[1000];

int main()
{
    int n,x,j,i;
    cin >> n;
    stack<int> st;
    for(i = 0; i < n; ++i)
        cin >> a[i];
    
    for(i = 0; i < n; ++i)
        cin >> b[i];
    j = 0;
    for(i = 0; i < n; ++i)
    {
        st.push(a[i]);
        while(!st.empty() and st.top() == b[j]) {
            j++;
            st.pop();
        }
    }
    if(st.empty() and j == n) puts("Correct");
    else puts("Incorrect");
    
    return 0;
}
