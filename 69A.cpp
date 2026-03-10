#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(3,0);
    for(int i=0;i<N;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[0]+=a;
        v[1]+=b;
        v[2]+=c;
    }
    if(v[0]==0 && v[1]==0 && v[2]==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}