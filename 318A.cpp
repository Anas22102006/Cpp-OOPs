#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin >> n >> p;
    if(p < (n/2+1)){
        cout << (1+(p-1)*2) ;        
    }
    else{
        p=p-(n/2+1);
        cout << p*2 ;
    }
    return 0;
}