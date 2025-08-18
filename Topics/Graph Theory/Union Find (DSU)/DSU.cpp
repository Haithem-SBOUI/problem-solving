#include <bits/stdc++.h>
using namespace std;

class DSU {
    int rank[9999];
    int parent[9999];
    int n;
    
    DSU(int k) {
        n = k;
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

    int unionn(int n1, int n2) {
        int p1 = find(n1);
        int p2 = find(n2);

        if (p1 < p2)
            swap(p1, p2);
        
        parent[p2] = p1;
        rank[p1] += rank[p2];
        rank[p2] = 0;
    }
};