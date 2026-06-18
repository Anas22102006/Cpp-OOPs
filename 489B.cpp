#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m;
    vector<int> bys(m);
    for(int i=0;i<m;i++){
        cin >> bys[i];
    }
    cin >> n;
    vector<int> gls(n);
    for(int i=0;i<n;i++){
        cin >> gls[i];
    }
    sort(bys.begin(),bys.end());
    sort(gls.begin(),gls.end());
    int i=0,j=0;
    int maxpair=0;
    while (i<m && j<n){
        if(abs(bys[i]-gls[j]) <=1){
            maxpair++;
            i++;
            j++;
        }
        else if(bys[i]<gls[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << maxpair << endl;
    return 0;
}