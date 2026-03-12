#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    int diff= min(v[1]-v[0], v[2]-v[1]);;
    for(int i=1;i<N;i++){
        if(v[i]-v[i-1]!=diff){
            cout << i+1;
            break;
        }
    }
    return 0;
}