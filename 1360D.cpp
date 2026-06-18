#include <bits/stdc++.h>
using namespace std;
bool isprime(long long x){
    if(x <2) return false;
    if(x%2 ==0 ) return false;
    for(long long i=3; i*i <= x ; i+=2){
        if(x%i == 0) return false;
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    while(N--){
        long long n, k;
        cin >> n >> k;
        long long ans= 0;
        if(isprime(n) || k==1){
            if(n == k){ 
                ans= 1;

            }
            else{ 
                ans = n;

            }
        }
        else{
            for(long long i= k ; i>0 ; i--){
                if(n %i ==0){
                    ans=n/i;
                    break;

                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}