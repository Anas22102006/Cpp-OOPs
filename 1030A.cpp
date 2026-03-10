#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool iseasy=true;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            iseasy=false;
        }
    }
    if(iseasy){cout << "EASY";}
    else{cout << "HARD";}
    return 0;
}