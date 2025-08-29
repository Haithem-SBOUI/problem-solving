#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res;
        for(auto & c:s) {
            if (c == '(') {
                st.push(c);
                if (st.size() > 1) res += c;
            } else {
                st.pop();
                if (st.size() > 0) res += c;
            }
        }
        return res;

        // v2
        string res;
        int openCount = 0;
        for (auto &c:s) {
            if (c == '(') {
                if (openCount) {
                    res+=c;
                }
                openCount++;
            } else {
                if (openCount > 1) {
                    cout << openCount  << endl;
                    res+=c;
                }
                openCount--;

            }
        }
        return res;
    }
};