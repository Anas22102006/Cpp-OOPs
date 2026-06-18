#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i]; 
    }
    sort(v.begin(),v.end());
    cin >> q;
    vector<int> d(q);
    for(int i=0;i<q;i++){
        cin >> d[i];
    }
    for(int x:d){
        int tot=upper_bound(v.begin(), v.end(), x) - v.begin();;
        cout << tot <<endl;
    }
    return 0;
}