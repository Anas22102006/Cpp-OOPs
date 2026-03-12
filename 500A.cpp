#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,t;
    cin >> N >> t;
    vector<int> v(N-1);
    for(int i=0;i<N-1;i++){
        cin >> v[i];
    }
    int pos=1;
    while(pos<N){
        pos+=v[pos-1];
        if(pos==t){
            cout << "YES";
            break;
        }
        else if(pos>t){
            cout << "NO";
            break;
        }
    }
    return 0;
}