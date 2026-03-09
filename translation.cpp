#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string r= s2;
    reverse(r.begin(),r.end());
    if(s1==r){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}