#include <bits/stdc++.h>
    
using namespace std;
    
#define endl                       '\n'
#define mod                        1000000007
#define span(a)                    begin(a), end(a)
#define ps(x)                      fixed << setprecision(8) << (x);
#define int                        long long
#define ll                         long long
#define inf                        1e18
    
template<class T>
ostream &operator<<(ostream &out, const vector<T> &v) {
    for (int i = 0, n = (int) v.size(); i < n; ++i) {
        if (i) out << ' ';
        out << v[i];
    }
    return out << "\n";
}
    
template<class T>
ostream &operator<<(ostream &out, const vector<vector<T>> &M) {
    for (int i = 0, n = (int) M.size(); i < n; ++i) {
        for (int j = 0, m = (int) M[i].size(); j < m; ++j) {
            if (j) out << " ";
            out << M[i][j];
        }
        out << "\n";
    }
    return out;
}
    
int ceil_div(int a, int b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

    
void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<vector<int>> graph(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) graph[i][j] = 1;
        }
    }

    vector<pair<int, pair<int, int>>> vec;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int fi = a[i] * a[j];
            int fifi = i;
            int fise = j;
            vec.push_back({fi, {fifi, fise}});
        }
    }
    sort(span(vec));
    vector<int> garb(n);
    for (auto i: vec) {
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }
    for (int i = 0; i < n; ++i) {
        if (c <= 0)
            break;
        c -= vec[i].first;
        graph[vec[i].second.first][vec[i].second.second] = -1;
        graph[vec[i].second.second][vec[i].second.first] = -1;
    }
    for (int i = 0; i < n; ++i) {
        cout << graph[i];
    }
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        int k = 0;
        for (int j : graph[i]) {
            if (j != -1)
                k++;
        }
        cnt = max(cnt, k);
    }
    cout << cnt << endl;
}
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    cout << '\n';
    cout << "Output\n";
#endif
   
    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    cout << endl;
    return 0;
}