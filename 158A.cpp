#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin >> k >> n;
    vector<int> v(k);
    for(int i=0 ; i<k ; i++){
        cin >> v[i];
    }
    int place= v[n-1];
    int advance=0;
    for(int x:v){
        if(x>= place && x!=0){
            advance++;
        }
        else if(x<place){
            break;
        }
    }
    cout << advance << endl;
    return 0;
}