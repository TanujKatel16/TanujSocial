#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, f, s;
        cin >> n >> f >> s;

        long long divf = n / f;
        long long divs = n / s;

        long long divboth = n / lcm(f, s);

        long long divof = divf - divboth;
        long long divos = divs - divboth;

        long long positive =
            divof * (2 * n - divof + 1) / 2;

        long long negative =
            divos * (divos + 1) / 2;

        cout << positive - negative << '\n';
    }
}