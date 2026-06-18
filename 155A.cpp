#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0 ; i<n ;i++){
        cin >> v[i];
    }
    int min=v[0];
    int max=v[0];
    int amazing=0;
    for(int i=1;i<n;i++){
        if(v[i] > max){
            amazing++;
            max= v[i];
        }
        else if(v[i] < min){
            amazing++;
            min= v[i];
        }
    }
    cout << amazing << endl;
    return 0;
}