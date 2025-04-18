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
    int s;
    int m;
    cin>>n;
    cin>>s;
    cin>>m;
    vector<int> l(n);
    vector<int> r(n);
    for(int i=0;i<n;i++){
        cin>>l[i];
        cin>>r[i];
    }
    if((l[0]>=s)||((m-r[n-1])>=s)){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if((l[i]-r[i-1])>=s){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
