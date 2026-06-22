#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.length()<=10){
        cout << s << endl;
        return 0; }
    string res= s[0]+ to_string(s.length()-2) + s[s.length()-1];
    cout << res << endl;
    return 0;
}