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

int calc(int c1, int c2){
    if(c1>c2)
        return 1;
    else if(c1<c2)
        return 0;
    return -1;
}
void solve() {
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int l=0;
    int r=n-1;
    vector<int> q;
    q.push_back(p[n/2]);
    while(l<r){
        q.push_back(p[r--]);
        if (!(l+1<r))
            break;
        q.push_back(p[l++]);
    }
    // for(int j=0;j<n;j++){
    //     cout<<q[j]<<end;
    // }
    
    cout << n/10 + n%10 << endl;
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
