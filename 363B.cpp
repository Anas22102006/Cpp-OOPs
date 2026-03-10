#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin >> N >> K;
    vector<int> v;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int windowsum=0;
    for(int i=0;i<K;i++){
        windowsum+=v[i];
    }
    int mini=windowsum;
    int pos=1;
    for(int i=1;i<=N-K;i++){
        int sum= windowsum-v[i-1]+v[i+K-1];
        windowsum=sum;
        if(sum<mini){
            mini=sum;
            pos=i;
        } 
    }
    cout << ++pos;
    return 0;
}