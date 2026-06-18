#include <bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2,n3;
    cin >> n1 >> n2 >> n3 ;
    int pos1= max(max(n1[0]-'0',n2[0]-'0'),n3[0]-'0') - min(min(n1[0]-'0',n2[0]-'0'),n3[0]-'0');
    int pos2= max(max(n1[1]-'0',n2[1]-'0'),n3[1]-'0') - min(min(n1[1]-'0',n2[1]-'0'),n3[1]-'0');
    int pos3= max(max(n1[2]-'0',n2[2]-'0'),n3[2]-'0') - min(min(n1[2]-'0',n2[2]-'0'),n3[2]-'0');
    int pos4= max(max(n1[3]-'0',n2[3]-'0'),n3[3]-'0') - min(min(n1[3]-'0',n2[3]-'0'),n3[3]-'0');
    string res="";
    res += (pos1 + '0');
    res += (pos2 + '0');
    res += (pos3 + '0');
    res += (pos4 + '0');
    cout << res << endl;
    return 0;
}