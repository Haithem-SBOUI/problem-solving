#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int c1 = coordinate1[0] - 'a' + 1;
        int c2 = coordinate2[0] - 'a' + 1;
        int n1 = coordinate1[1] - '0';
        int n2 = coordinate1[1] - '0';
        if (( c1 % 2 == c2 % 2) && (n1 % 2 == n2 % 2)) return true;
        return false;

    }
};

int main() {
    Solution solution;
    cout << solution.checkTwoChessboards("a1", "h3");
    return 0;
}
