#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> words;
    string word="";
    for(int i=0;i<=s.length();i++){
        if(s[i]==' ' || i==s.length()){
            words.push_back(word);
            word="";
        }
        else{
            word+=s[i];
        }
    }
    for(string &wrd:words){
        int ln= wrd.length();
        for(char &c:wrd){
            char temp = c+ln;
            if(c<='z' && temp>='z'){
                temp='z';
            }
            else if(c<='Z' && temp>='Z'){
                temp='Z';
            }
            c= temp;
        }
    }
    for(string shifted:words){
        cout << shifted <<" ";
    }
    return 0;
}