#include <bits/stdc++.h>
using namespace std;

bool ispal(long long x) {
    long long temp = x;
    long long rev = 0;

    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return temp == rev;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long n;
        cin >> n;

        long long temp1 = 0;
        long long temp2 = n;
        bool found = false;

        while (temp1 <= n && temp2 >= 0) {
            if (ispal(temp2)) {
                cout << temp2 << " " << temp1 << endl;
                found = true;
                break;
            }

            temp1 += 12;
            temp2 -= 12;
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}