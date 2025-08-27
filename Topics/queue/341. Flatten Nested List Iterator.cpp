#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1 ; i <= n ; i++) {
            q.push(i);
        }
        while(q.size() > 1) {
            for (int i = 1 ; i<k ; i++) {
                q.push(q.front());
                q.pop();
            }
            q.pop();
            // // 2nd version using vector
            // int currI = 1;
            // int x = (currI+k)%v.size();
            // v.erase(v.begin() + x)
        }
        return q.front();
    }
};
