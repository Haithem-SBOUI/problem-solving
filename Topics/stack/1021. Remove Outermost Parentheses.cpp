#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res;
        for(auto & c:s) {
            if (st.size() != 1) {
                if (c == '(') st.push(c);
                else st.pop();
                res += c;
            } else {
                st.pop();
            }
        }
        return res;
    }
};