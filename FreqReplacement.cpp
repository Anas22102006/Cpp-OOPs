#include <bits/stdc++.h>
using namespace std;
string replaced(string original,char ch){
    vector<int> v(26,0);
    int maxi=0;
    char rep=' ';
    for(char c:original){
        v[c-'a']++;
        if(v[c-'a']>maxi){
            rep= c;
        }
    }
    for(char &c:original){
        if(c==rep){
            c=ch;
        }
    }
    return original;
}
int main(){
    string st;
    char target;
    cin >> st;
    cin >> target;
    cout << replaced(st,target);
    return 0;
}