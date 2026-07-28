#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>> orig(m,vector<int> (n));
    vector<vector<int>> dupl(n,vector<int> (m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n ; j++){
            cin >> orig[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dupl[i][j] = orig[j][i];
        }
    }
    for(vector<int> v: dupl){
        for(int x: v){
            cout << x << " ";
        }
        cout << endl;
    } 
    return 0;
}