#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0;
    int groups=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(i==0){
            groups++;
            a=x;
        }
        else{
            if(x!=a){
                groups++;
                a=x;
            }
        }
    }
    cout << groups;
    return 0;
}