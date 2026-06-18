#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int tot=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum= v[i]+v[j];
            if((sum&(sum-1))== 0){
                tot++;
            } 
        }
    }
    cout << tot << endl;
    return 0;
}