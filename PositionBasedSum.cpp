#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n ; i++){
        cin >> vec[i];
    }
    vector<int> second;
    int i=1;
    for(int num:vec){
        int temp= num/i;
        if(temp >=10){
            temp= temp/10;
        }
        second.push_back(temp);
        i*=10;
    }
    int res=0;
    for(int n:second){
        res+=n*n;
    }
    cout << res << endl;
    return 0;
}