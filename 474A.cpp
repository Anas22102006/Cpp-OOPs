#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin >> ch;
    int jmp=0;
    if(ch=='R'){jmp=-1;}
    else{ jmp= 1;}
    string blind;
    cin >> blind;
    string res="";
    for(char c:blind){
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                res+= s[i+jmp];
            }
        }
    }
    cout << res << endl;
    return 0;
}