#include <bits/stdc++.h>
using namespace std;
int marchingppl(vector<vector<int>> cds){
    set<int> s;
    for(vector<int> vc:cds){
        for(int i=vc[0];i<=(vc[0]+vc[2]);i++){
            s.insert(i);
        }
    }
    return s.size();
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> inp;
    for(int i=0;i<n;i++){
        int x,y,d;
        cin >> x>> y>> d;
        inp.push_back({x,y,d});
    }
    cout << marchingppl(inp) << endl;
    return 0;
}