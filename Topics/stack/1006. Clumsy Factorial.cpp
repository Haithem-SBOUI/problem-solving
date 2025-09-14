#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n);
        int op = 0;
        for (int i = n-1; i > 0; i--) {
            if (op == 0) {
                st.top() *=  i;
            } else if (op == 1) {
                st.top() /= i;
            } else {
                st.push(op == 2 ? i : -i);
            }
            op = (op + 1)%4;
        }
        int res = 0;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};