#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> q;
        int d = 0, r = 0, totD = 0, totR = 0;
        for (auto & c : senate) {
            q.push(c);
            totD+= c == 'D';
            totR+= c == 'R';
        }

        while(totD && totR) {
            if (q.front() == 'D') {
                if (d) {
                    q.pop();
                    d--;
                    totD--;
                }else {
                    r++;
                    q.push(q.front());
                    q.pop();
                }
            } else {
                if (r) {
                    q.pop();
                    r--;
                    totR--;
                }else {
                    d++;
                    q.push(q.front());
                    q.pop();
                } 
            }
        }
        return totR > 0 ? "Radiant" : "Dire";
    }
};
