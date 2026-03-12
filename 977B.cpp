#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    vector<string> vs;
    set<string> st;
    for(int i=0;i<s.length()-1;i++){
        string temp=s.substr(i,2);
        vs.push_back(temp);
        st.insert(temp);
    }
    int max=0;
    string res="";
    for(string str:st){
        int c= count(vs.begin(),vs.end(),str);
        if(c>max){
            max=c;
            res=str;
        }
    }
    cout << res;
    return 0;
}