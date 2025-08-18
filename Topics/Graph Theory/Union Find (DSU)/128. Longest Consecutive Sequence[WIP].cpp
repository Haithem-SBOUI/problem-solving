#include<bits/stdc++.h>
using namespace std;

class Dsu {
public:
    vector<int> rank;
    vector<int> parent;
    int n;
    Dsu(int k) {
        n = k;
        rank.resize(n);
        parent.resize(n);
        for (int i = 0 ; i < n ; i++) {
            parent[i] =  i;
            rank[i] = 1;

        }
    }


    int find(int i) {
        if (parent[i] != i)
            return parent[i] = find(parent[i]);
        return parent[i] = i;
    }

    void unionn(int n1, int n2) {
        int p1 = find(n1);
        int p2 = find(n2);
        if (p1 < p2)
            swap(p1, p2);

        parent[p2] = p1;
        rank[p1] += rank[p2];
        rank[p2] = 0;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        Dsu graph = Dsu(100005);
        int vis[100005];
        memset(vis, 0, sizeof vis);
        for(auto x : nums) {
            vis[x] = 1;
            if (vis[x+1]) {
                graph.unionn(x, x+1);
            }
        } 
        int ans = 0;
        for(auto x : nums) {
            if (vis[x+1]) {
                graph.unionn(x, x+1);
            }
            cout << graph.rank[graph.find(x)] << endl;
            ans = max(ans, graph.rank[graph.find(x)]);
        }


        return ans;
    }
};