#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<int> wubs;
    for(int i=0;i<s.length()-2;i++){
        if(s.substr(i,3)=="WUB"){
            wubs.insert(i);
        }
    }
    string ans="";
    for(int i=0;i<s.length();i++){
        if(wubs.count(i)){
            if(!ans.empty() && ans.back()!=' '){
                ans+=" ";
            }
            i+=2;
        }
        else{
            ans+=s[i];
        }
    }
    cout << ans;
    return 0;
}