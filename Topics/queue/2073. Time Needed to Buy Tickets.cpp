#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for (auto &t: tickets) q.push(t);
        int res = 0;
        while(!q.empty()) {
            res++;
            int curr = q.front() - 1;
            q.pop();
            if (curr > 0) q.push(curr);
            if (k == 0 && curr == 0) break;
            if (k == 0) k = q.size() - 1;
            else k--;
        }
        return res;
        
        // Sol 2
        for (int i = 0 ; i < tickets.size() ; i++) q.push(i);
        while(tickets[k]) {
            res++;
            int curr = q.front();
            tickets[curr]--;
            q.pop();
            if (tickets[curr]) q.push(curr);

        }
    }
};