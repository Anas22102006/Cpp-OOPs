#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        bool con =true;
        st.insert(s[0]);
        if(s.length()==1){
            cout <<"YES" << endl;
        }

        else{
        for(int i=1; i<s.length();i++){
            if(!st.count(s[i]) || s[i]==s[i-1]){
                st.insert(s[i]);
                con = true;
            }
            else{
                con = false;
                break;
            }
        }
        if(con){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }}

    }
    return 0;
}