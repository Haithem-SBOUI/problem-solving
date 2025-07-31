#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 3e5 + 7;

int n, b[N];

void test_case() {
    cin >> n;
    map<ll, int> m;
    ll s = 0;
    for (int i = 0 ; i < n + 2 ; i++) {
        cin >> b[i];
        m[b[i]]++;
        s += b[i];
    }
    bool cond = false;
    for (int i = 0; i < n + 2 ; i++) {
        m[b[i]]--;
        if (m[s - 2 * b[i]]) {
            m[s - 2 * b[i]]--;
            cond = true;
            break;
        }
        m[b[i]]++;
    }
    if (cond) {
        for (int i = 0 ; i < n + 2 ; i++) {
            if (m[b[i]]) {
                cout << b[i] << " ";
                m[b[i]]--;
            }
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
// #ifndef ONLINE_JUDGE
//     fropen("in.txt", "r", stdin);
// #endif
    fastio;
    int T=1;
    cin >> T;
    while (T--) {
        test_case();
    }
    return 0;
}