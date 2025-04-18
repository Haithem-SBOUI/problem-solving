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
    string res ="";
    string row;
    for(int i = 0;i < n;i++){
        cin>>row;
        for(int j = 1;j <= 4;j++){
            if(row[j] == '#'){
                res+=to_string(j)+" ";
                break;
            }
        }
    }
    std::cout<<res<<endl;
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

def main:
    for
