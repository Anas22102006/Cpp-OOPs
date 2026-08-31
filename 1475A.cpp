#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        long long n;
        cin >> n;
        if(n%2!=0 || (n&(n-1))!=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}