#include<bits/stdc++.h>
using namespace std;

class DSU {
    public:
    vector<int> rank;
    vector<int> parent;
    int n;
    

    DSU(int k) {
        n = k;
        rank.resize(n);
        parent.resize(n);
        for (int i = 0 ; i < n ; i++) {
            parent[i] = i;
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
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        DSU dsu = DSU(n);
        for (auto & el:edges)
            dsu.unionn(el[0], el[1]);
        return dsu.find(source) == dsu.find(destination);
    }
};