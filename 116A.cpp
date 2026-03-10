#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int totpass=0;
    int max=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a;
        cin >> b;
        totpass-=a;
        totpass+=b;
        if(totpass>max){
            max=totpass;
        }
    }
    cout << max;
    return 0;
}