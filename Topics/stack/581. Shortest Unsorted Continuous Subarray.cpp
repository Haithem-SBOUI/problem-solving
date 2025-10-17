#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        int n = v.size();
        int l = n, r = 0;
        stack<int> st;
        for (int i = 0 ; i < n ; i++) {
            while (!st.empty() && v[i] < v[st.top()]) {
                l = min(l, st.top());
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty())
            st.pop();

        for (int i = n -1; i >= 0; i--) {
            while (!st.empty() && v[i] > v[st.top()]) {
                r = max(r, st.top());
                st.pop();
            }
            st.push(i);
        }
        return (l > r) ? 0 : r - l + 1;
    }
};