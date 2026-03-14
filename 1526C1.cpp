#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0 ; i<N;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int totalhel=0;
    for(int i:v){
        totalhel+=i;
    }
    int count=N;
    for(int i:v){
        if(totalhel-1 <0){
            totalhel-=i;
            count--;
        }
        else{
            break;
        }
    }
    cout << count;
    return 0;
}