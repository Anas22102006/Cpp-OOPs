#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    int l=0;
    int r=N-1;
    int a=0;
    int b=0;
    bool turn = true;
    while(l<=r){
        int val;
        if(v[l]>v[r]){
            val=v[l];
            l++;
        }
        else{
            val=v[r];
            r--;
        }
        if(turn){a+=val;}
        else{b+=val;}
        turn=!turn;
        
    }
    cout << a <<" "<< b;
    return 0;
}