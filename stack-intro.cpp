#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    stack<char> st;
    int flag = 1;
    for(int i=0;i<str.size();++i)
    {
        char c = str[i];
        if(c == '(') st.push(c);
        else {
            if(st.size() > 0) st.pop();
            else {
                flag = 0;
                break;
            }
        }
    }
    if(st.size()) flag = 0;
    if(flag) puts("Correct");
    else puts("Incorrect");
    return 0;
}
