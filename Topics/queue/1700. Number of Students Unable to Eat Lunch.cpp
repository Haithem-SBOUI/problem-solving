#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (auto &s:students) q.push(s);
        int acc = 0;
        int i = 0;
        while (q.size() && q.size() > acc) {
            if (q.front() == sandwiches[i]) {
                i++;
                acc = 0;
            } else {
                q.push(q.front());
                acc++;
            }
            q.pop();
        }
        return q.size();
    }
};
