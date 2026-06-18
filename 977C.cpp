#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n>> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if (n==k){
        cout << v[k-1]+1 << endl;
    }
    else if(v[k-1]==v[k]){
        cout << -1 << endl;
    }
    else{
        cout << v[k-1]+1 << endl;
    }
    return 0;
}