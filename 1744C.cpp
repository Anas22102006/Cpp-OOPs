#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int n;
        char curr;
        string seq;

        cin >> n >> curr;
        cin >> seq;

        if (curr == 'g') {
            cout << 0 <<  endl;
            continue;
        }

        string conv = seq + seq;

        int cnt = 0;
        int lastGreen = -1;

        for (int i = conv.length() - 1; i >= 0; i--) {

            if (conv[i] == 'g') {
                lastGreen = i;
            }

            if (conv[i] == curr) {
                cnt = max(cnt, lastGreen - i);
            }
        }

        cout << cnt << endl;
    }

    return 0;
}