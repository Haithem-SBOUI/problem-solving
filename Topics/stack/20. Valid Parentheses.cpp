#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // v1
        stack<char> st;
        unordered_map<char, char> m;
        unordered_set<char> closePar = {'}', ')', ']'};
        m['{'] = '}';
        m['('] = ')';
        m['['] = ']';
        for(auto & c:s) {
            if (m.find(c) != m.end()) {st.push(c); continue;}
            else if (closePar.count(c)) {
                if (!st.empty() && c== m[st.top()]) st.pop();
                else return false;
            }
        }
        // v2
        string openB = "([{";
        string closeB = ")]}";
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if (find(openB.begin(), openB.end(), s[i]) != openB.end()) { // if s[i] in openB
                st.push(s[i]);
            } else {
                if(!st.empty() && (closeB.find(s[i]) == openB.find(st.top()))) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};