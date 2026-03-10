#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a>> b;
        v.push_back({a,b});
    }
    int count =0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i!=j && v[i][0] <= v[j][0] && v[j][0]<=v[j][1] && v[j][1] <= v[i][1]){
                count ++;
            }
        }
    }
    if(count==0){cout << -1;}
    else{cout << count ;}
    return 0;
}