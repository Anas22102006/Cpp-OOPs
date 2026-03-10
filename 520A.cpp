#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<int> v(26,0);
    for(char ch:s){
        v[ch-'a']++;
    }
    bool con=true;
    for(int i:v){
        if(i==0){
            con=false;
            break;
        }
    }
    if(con){cout << "YES";}
    else{cout << "NO";}
    return 0;
}