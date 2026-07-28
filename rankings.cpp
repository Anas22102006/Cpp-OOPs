#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        st.insert(x);
    }
    vector<pair<int,int>> vp;
    int ran=1;
    for(int x:st){
        vp.push_back({x,ran});
        ran++;
    }
    for(int i=0;i<v.size();i++){
        for(auto &p:vp){
            if(p.first==v[i]){
                cout << p.second << " ";
            }
        }
    }
    return 0;
}