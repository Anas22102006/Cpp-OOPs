#include <bits/stdc++.h>
using namespace std;
int main(){
    int c,r;
    cin >> c >> r;
    int count;
    for(int i=1;i<1000;i++){
        int n=c*i;
        if(n%10==0 || n%10==r){
            count=i;
            break;
        }
    }
    cout << count;
    return 0;
}