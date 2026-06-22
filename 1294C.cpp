#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = -1, b = -1, c = -1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                n /= i;
                break;
            }
        }

        if (a == -1)
        {
            cout << "NO\n";
            continue;
        }

        for (int i = a + 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                b = i;
                c = n / i;
                break;
            }
        }

        if (b != -1 && c != -1 && a != b && b != c && a != c && c >= 2)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
