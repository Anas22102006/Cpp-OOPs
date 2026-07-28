#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int abssum=0;
    bool pos= false;
    bool neg = false;
    for(int i=0;i<n;i++){
        cin >> vec[i];
        abssum+= abs(vec[i]);
        if(vec[i]>=0) pos=true;
        else neg= true;
    }
    if(pos && neg){
        cout << abssum;
    }
    else if(pos && !neg){
        cout << abssum - 2* (*min_element(vec.begin(),vec.end()));
    }
    else{
        cout << abssum - abs(*min_element(vec.begin(),vec.end())); 
    }
    return 0;

}