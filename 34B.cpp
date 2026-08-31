#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int sum= 0;
    for(int i=0;i<m;i++){
        if(sum-vec[i] > sum){
            sum-=vec[i];
        }
    }
    cout << sum << endl;
    return 0;
}