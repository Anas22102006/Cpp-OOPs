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
    while(l<r){
        if(v[l] <= v[r]){
            a+=v[r];
            r--;
        }
        else{
            a+=v[l];
            l++;
        }
        if(v[l] <= v[r]){
            b+=v[r];
            r--;
        }
        else{
            b+=v[l];
            l++;
        }
        
    }
    cout << a <<" "<< b;
    return 0;
}