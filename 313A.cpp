#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N>=0){
        cout << N;
        return 0;
    }
    int lst = N/10;
    int slst =((N/100)*10) + (N%10);
    if(lst>slst){
        cout << lst;
    }
    else{
        cout << slst;
    }
    return 0;
}