#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> w(N);
    for (int i = 0; i < N; i++) cin >> w[i];

    for (int i = 1; i < N; i++) w[i] += w[i - 1];

    int n;
    cin >> n;
    while (n--) {
        int y;
        cin >> y;
        cout << lower_bound(w.begin(), w.end(), y) - w.begin() + 1 << '\n';
    }
    return 0;
}