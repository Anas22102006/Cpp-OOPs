#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int tot = m + ((m+(m/n))/n);
    cout << tot << endl;
    return 0;
}