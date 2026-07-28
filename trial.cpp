#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(26,0);
    string a,b;
    cin >> a >> b;
    for(char ch:a){
        v[ch-'a']++;
    }
    for(char ch:b){
        v[ch-'a']--;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            cout << (char)('a'+i) << endl;
            break;
        }
    }
    return 0;
    
}