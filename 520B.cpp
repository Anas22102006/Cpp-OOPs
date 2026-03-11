#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(m<n){
        cout << (n-m) << endl;
        return 0;
    }
    int clicks=0;
    while(m>n){
        if(m%2!=0){
            m+=1;
        }
        else{
            m/=2;
        }
        clicks++;
    }
    clicks+= (n-m);
    cout << clicks;
    return 0;
}