#include <bits/stdc++.h>
using namespace std;
bool isprime(int x){
    if(x<2){return false;}
    int flag=0;
    for(int i=1;i<x;i++){
        if(x%i==0){flag++;}
    }
    return flag==1;
}
int main(){
    int n;
    cin >> n;
    int steps=0;
    while(n!=0){
        for(int i=1;i<=n;i++){
            if(n%i==0 && isprime(i)){
                n-=i;
                steps++;
                break;
            }
        }
    }
    cout << steps << endl;
    return 0;
}