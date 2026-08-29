#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout << '#';
            }
        }
        else if((i/2)%2!=0){
            for(int j=0;j<n-1;j++){
                cout << '.';
            }
            cout << '#';
        }
        else{
            cout << '#';
            for(int j=0;j<n-1;j++){
                cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}