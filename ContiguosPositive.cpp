#include <bits/stdc++.h>
using namespace std;
int maxsum(vector<int> v){
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<v.size();i++){
        currsum+= max(v[i],0);
        if(v[i]<0 || i==v.size()-1){
            maxsum= max(maxsum,currsum);
            currsum=0;
        }
    }
    return maxsum;
}
int main(){
    int s;
    cin >> s;
    vector<int> vec(s);
    for(int i=0;i<s;i++){
        cin >> vec[i];
    }
    cout << maxsum(vec) << endl;
    return 0;
}