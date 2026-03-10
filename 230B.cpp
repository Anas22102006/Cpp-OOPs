#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int x;
        cin>> x;
        int flag=0;
        for(int j=1;j<=x;j++){
            if(x%j==0){
                flag++;
            }
        }
        if(flag==3){
            cout << "YES\n"; 
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}