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
    int xc;
    cin >> xc;
    int yc;
    cin >> yc;
    int k;
    cin >> k;
    vector<int> vXi(k, xc);
    vector<int> vYi(k, yc);
    int l=0;
    int r=k-1;
    while(l<r){
        vXi[l]+=l+1;
        vXi[r]-=l+1;
        vYi[l]-=l+1;
        vYi[r]+=l+1;
        l++;
        r--;
    }
    for(int i=0;i<k;++i){
        cout<<vXi[i]<<" "<<vYi[i]<<endl;
    }
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
