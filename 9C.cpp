#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    int count = 0;
    for(long long i = 1;; i++){
        long long x = i, num = 0, p = 1;
        while(x){
            num += (x % 2) * p;
            p *= 10;
            x /= 2;
        }
        if(num > n) break;
        count++;
    }
    
    cout << count;
}