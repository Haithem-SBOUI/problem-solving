#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    struct comp1 {
        bool operator()(const int& x1, const int& x2) {
            return x1 > x2;
        }
    };
    bool lemonadeChange(vector<int>& bills) {
        sort(bills.begin(), bills.end());
        priority_queue<int> pq;
        for(int i = 0; i < bills.size();i++){
            pq.push(bills[i]);
            if(bills[i]>5) {
                bills[i]-=5;
                while(!pq.empty(), bills[i]>0){
                    bills[i]-=pq.top();
                    pq.pop();
                }
                if (bills[i]>0) return false;
            };
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<int> v{5,5,10,10,20};
    cout << solution.lemonadeChange(v);
    return 0;
}
