#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
# define ll long long
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& v) {
        int n = v.size();
        vector<int> next(n, n); // next smallest element of i
        vector<int> prev(n, -1); // prev smallest element of i
        stack<int> st;
        for (int i = 0; i< n; i++) {
            while (!st.empty() && v[i] < v[st.top()]) {
                next[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && v[i] < v[st.top()]) {
                prev[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        vector<ll> left(n, 0);
        vector<ll> right(n, 0);
        for (int i = 0 ; i < n ; i++) {
            left[i] = v[i];
            int id = prev[i];
            if (id != -1) {
                left[i] += left[id] + v[i] * 1ll * (i - id - 1) ;
            } else {
                left[i] += v[i]*1ll * i;
            }
        }
 
        ll ans = 0;
        for (int i = n - 1; i > -1 ; i--) {
            right[i] = v[i];
            int id = next[i];
            if (id != n) 
                right[i] += right[id];
            right[i] += v[i]*1ll * (id - i - 1);
            ans = max(ans, right[i] + left[i] - v[i]*1ll);
        }
        return ans;
    }
};