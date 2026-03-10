#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        if(v.size()==1){
            cout<< "YES" << endl;
        }
        else if (v.size() == 2 && abs(v[0] - v[1]) <= 1) cout << "YES\n";
        else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}