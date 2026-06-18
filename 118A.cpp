#include <bits/stdc++.h>
using namespace std;
bool isvow(char c){
    string vowel = "aeiouyAEIOUY";
    return vowel.find(c)!= string::npos;
}
int main(){
    string s;
    getline(cin,s);
    string res="";
    for(char ch:s){
        if(!isvow(ch) && ch!=' '){
            res+='.';
            res+= (char)tolower((unsigned char)ch);
        }
    }
    cout << res;
}