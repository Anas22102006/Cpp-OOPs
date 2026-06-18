#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int a;
        cin >> a;
        double n= 360.0 / (180-a);
        if(n== ((int)n) && n>=3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}