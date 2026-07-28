#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string res="";
    for(int i=0;i<s.length();i+=2){
        char ch= s[i];
        int count = s[i+1]- '0';
        for(int j=0;j<count;j++){
            res+=ch;
        }
    }
    cout << res;
    return 0;
}