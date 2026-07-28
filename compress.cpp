#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    s+=" ";
    int count =1;
    string result="";
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            result+= s[i] + to_string(count);
            count=1;
        }
    }
    cout << result << endl;
    return 0;
}