#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char &c:s) {
            if (c == 'c' && st.size() > 1 && st.top() == 'b') {
                char x = st.top();
                st.pop();
                if (st.top() == 'a') st.pop();
                else st.push(x);
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};