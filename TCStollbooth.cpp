#include <bits/stdc++.h>
using namespace std;
class toll{
    private:
    stack<int> st;
    int cnt =0;
    public:
    void enter(int n){
        st.push(n);
        cnt++;
    }
    void exit(){
        if(!st.empty()){
            st.pop();
            cnt --;
        }
    }
    int peek(){
        if(cnt==0){
            return -1;
        }
        return st.top();
    }
    int count(){
        return cnt;
    }
};
int main(){
    toll t;
    string inp;
    getline(cin ,inp);
    inp+=',';
    vector<string> commands;
    stringstream ss(inp);
    string cmds;
    while(ss >> cmds){
        commands.push_back(cmds);
    }
    for(int i=0;i<commands.size();i++){
        string val= commands[i];
        if(val == "ENTER"){
            string no= commands[i+1];
            t.enter(stoi(no));
            i++;
        }
        if(val == "EXIT,"){
            t.exit();
        }
        if(val == "PEEK,"){
            cout << t.peek();
            if(i!=commands.size()-1){
                cout << ", ";
        }
        }
        if(val == "COUNT,"){
            cout << t.count();
            if(i!=commands.size()-1){
                cout << ", ";
            }
        }
    }
    return 0;
}