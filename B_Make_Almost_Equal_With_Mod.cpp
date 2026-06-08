#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long k = 2;

        for (int p = 1; p <= 60; p++) {
            unordered_set<long long> s;

            for (int i = 0; i < n; i++) {
                s.insert(v[i] % k);
            }

            if (s.size() == 2) {
                cout << k << '\n';
                break;
            }

            k <<= 1;
        }
    }

    return 0;
}