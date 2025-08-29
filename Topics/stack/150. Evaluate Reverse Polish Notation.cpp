#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& t) {
        unordered_map<string, function<int(int, int)>> op;
        op["+"] = [](int a, int b) { return a + b; };
        op["-"] = [](int a, int b) { return a - b; };
        op["*"] = [](int a, int b) { return a * b; };
        op["/"] = [](int a, int b) { return a / b; };
        stack<int> st;
        for (auto s:t) {
            if (!op.count(s)) {
                st.push(stoi(s));
            } else {
                int top = st.top();
                st.pop();
                int res = op[s](st.top(), top);
                st.pop();
                st.push(res);
            }
        }
        return st.top();
    }
};