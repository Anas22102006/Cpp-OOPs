#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    set<string> st;
    vector<string> v;
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        st.insert(s);
        v.push_back(s);
    }
    string winning="";
    int max=0;
    for(string s:st){
        int c=count(v.begin(),v.end(),s);
        if(c > max){
            max= c;
            winning =s;
        }
    }
    cout << winning ;
    return 0;
}