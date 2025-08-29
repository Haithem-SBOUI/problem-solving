#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res;
        for(auto & c:s) {
            if (!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        while(!st.empty()) {
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};