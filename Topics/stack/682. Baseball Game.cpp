#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> s;
        for (int i = 0; i < o.size() ; i++) {
            if (o[i] == "+"){
                int sum = s.top();
                s.pop();
                sum+=s.top();
                s.push(sum- s.top());
                s.push(sum);
            }
            else if( o[i] == "D") s.push(s.top() *2);
            else if( o[i] == "C") s.pop();
            else s.push(stoi(o[i]));
        }
        int res = 0;
        while(!s.empty()) {
            res += s.top(); 
            s.pop();
        }
        return res;
    }
};