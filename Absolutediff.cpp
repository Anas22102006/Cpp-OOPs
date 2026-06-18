#include <bits/stdc++.h>
using namespace std;
int lstabsdiff(vector<int> v , int n){
    int lstdiff=INT_MAX;
    int res=0;
    for(int x:v){
        if(abs(n-x)<lstdiff){
            lstdiff=abs(n-x);
            res=x;
        }
    }
    return res;
}
int main(){
    int len,num;
    cin >> len >> num;
    vector<int> vec(len);
    for(int i=0;i<len;i++){
        cin >> vec[i];
    }
    cout << lstabsdiff(vec,num)<< endl;
    return 0;
}