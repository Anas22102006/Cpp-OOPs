#include <bits/stdc++.h>
using namespace std;
int count9(int n){
    string s= to_string(n);
    return count(s.begin(),s.end(),'9');
}
int main(){
    int p,d;
    cin >> p >> d;
    vector<int> v;
    for(int i=p;i>=(p-d);i--){
        if(i%10==9){
            v.push_back(i);
        }
    }
    int nines=0;
    int maxnum=0;
    for(int x:v){
        int temp=count9(x);
        if(temp>nines){
            maxnum=x;
            nines=temp;
        }
    }
    cout << maxnum << endl;
    return 0;
}