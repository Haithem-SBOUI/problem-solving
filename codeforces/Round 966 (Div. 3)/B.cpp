#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> x(n, 0);
    x[v[0]-1]=1;
    for(int i=1;i<n;i++){
        if ((i > 0 && x[v[i]-1] == 0) && ((i < n-1) && (x[v[i]+1] == 0))) {
            cout << "NO" << endl;
            return;
        }else{
            x[v[i]-1]=1;
        }
    }
    
    cout << "YES" << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
