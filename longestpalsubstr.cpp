#include <bits/stdc++.h>
using namespace std;
bool ispal(string s){
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
int main(){
    string s;
    cin >> s;
    int max=0;
    string longest="";
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length()-i;j++){
            string temp= s.substr(i,j+1);
            if(ispal(temp) && temp.length()>max){
                max= temp.length();
                longest=temp;
            }
        }
    }
    cout << longest ;
    return 0;
}