#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for (auto &s:logs){
            if (s == "../"){ if (!st.empty()) st.pop();}
            else if(s != "./") st.push(s);
        }
        return st.size();
    }
};
//    int minOperations(vector<string>& logs) {
//         int depth =0;
//         for(auto& log:logs){
//             if(log == "../"){
//                 if(depth > 0) depth--;
//             }
//             else if (log != "./") depth++;
//         }
//         return depth;
//     }
