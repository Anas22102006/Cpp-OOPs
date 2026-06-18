#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long n;
        cin >> n;
        bool flag= false;
        for(long long x=1;(x*x*x)<n ;x++){
            long long rem = n- (x*x*x);
            long long y= cbrt(rem);

            if(y*y*y == rem){
                flag=true;
                break;
            }
        }
        if(flag){cout << "Yes"<< endl;}
        else{cout << "NO" << endl;}
    }
    return 0;
}