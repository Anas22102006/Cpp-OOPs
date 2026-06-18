#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> sv=v;
    sort(sv.begin(),sv.end());
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int t,l,r;
        long long sum=0;
        cin >> t >> l >> r;
        if(t==1){
            for(int j=l-1;j<r;j++){
                sum+=v[j];
            }
        }
        else{
            for(int j=l-1;j<r;j++){
                sum+=sv[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}