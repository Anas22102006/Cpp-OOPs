#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tot=0;
    while(n>0){
        if(n&1){
            tot++;
        }
        n>>=1;
    }
    cout << tot << endl;
    return  0;
}