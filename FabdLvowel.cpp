#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        string wrd;
        cin >> v[i];
    }
    string res="";
    string vowel= "aeiouAEIOU";
    for(string s:v){
        if((vowel.find(s[0])!= string::npos) && (vowel.find(s[s.length()-1]) != string::npos)){
            res+=s;
        }
    }
    transform(res.begin(),res.end(),res.begin(),::tolower);
    if(res==""){
        cout << "no matches found" << endl;
        return 0;
    }
    cout << res << endl;
    return 0;
}