#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int min= *min_element(v.begin(),v.end());
    int max= *max_element(v.begin(),v.end());
    int maxbue= max-min;
    long long mincnt= count(v.begin(),v.end(),min);
    long long maxcnt= count(v.begin(),v.end(),max);
    if(min == max){
    cout << 0 << " " << (1LL * n * (n - 1) / 2) << endl;
    }
else{
    cout << maxbue << " " << (1LL * mincnt * maxcnt) << endl;
    }
    return 0;
}