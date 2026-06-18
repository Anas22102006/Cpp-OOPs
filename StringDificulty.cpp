#include <bits/stdc++.h>
using namespace std;
bool isvov(char c){
    set<char> s={'a','e','i','o','u'};
    return s.count(c);
}
pair<int,int> difficulty(vector<string> vs){
    int hard=0,easy=0;
    for(string s:vs){
        int vov=0,con=0,consc=0;
        for(char ch:s){
            if(isvov(ch)){
                vov++;
                consc=0;
            }
            else{
                con++;
                consc++;
                if(consc==3){
                    break;
                }
            }
        }
        if(con>vov || consc==3){
            hard++;
        }
        else{
            easy++;
        }
    }
    return {hard,easy};
}
int main(){
    string sent,word;
    getline(cin,sent);
    vector<string> stvector;
    stringstream ss(sent);
    while(ss >> word){
        stvector.push_back(word);
    }
    int difquo= (5* difficulty(stvector).first)-(2* difficulty(stvector).second);
    cout << difquo<< endl;
    return 0;
}