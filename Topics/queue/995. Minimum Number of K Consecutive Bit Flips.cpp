#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> lastFlippedI;
        int n = nums.size(), ans = 0;
        for (int i = 0 ; i<n ; i++) {
            if (!lastFlippedI.empty() && i >lastFlippedI.front()) lastFlippedI.pop();
            int f = lastFlippedI.size();
            if ((!nums[i] && f&1) || (nums[i] && !(f&1))) continue;
            int next = i+k-1;
            if (next >= n) return -1;
            lastFlippedI.push(next);
            ans++;
        }
        return ans;
    }
};