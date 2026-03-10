#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'|| i==s.length()-1){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    string res="";
    for(int i=0;i<v.size();i++){
        res+=v[i];
        if(i!=v.size()-1){
            res+='+';
        }
    }
    cout << res;
    return 0;
}