#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int mat[N][N];
int n, e;
int main(){
    cin >> n >> e;
    for (int i = 0 ; i < e; i++) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }

    for (int i =0 ; i < n ; i++) {
        for (int j =0 ; j < n ; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}