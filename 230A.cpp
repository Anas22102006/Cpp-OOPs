#include <bits/stdc++.h>
using namespace std;
int main(){
    int life,N;
    cin >> life >> N;
    vector<pair<int ,int>> v;
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    bool con=true;
    for(auto &p:v){
        if(p.first<life){
            life+=p.second;
        }
        else{
            con=false;
            break;
        }
    }
    if(con){cout << "YES" << endl;}
    else{cout << "NO" << endl;}
    return 0;
}