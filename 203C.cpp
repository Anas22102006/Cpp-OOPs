#include <bits/stdc++.h>
using namespace std;
int main(){
    int cl,sz;
    cin >> cl >> sz;
    int lq,hq;
    cin >> lq >> hq;
    int a,b;
    vector<pair <long long ,int>> pv;
    for(int i=1;i<=cl;i++){
        cin >> a >> b;
        long long size= (a*lq) + (b*hq);
        pv.push_back({size,i});
    }
    sort(pv.begin(),pv.end());
    vector<int> clients;
    int totcl=0;
    long long cursize=0;
    for(auto &p:pv){
        cursize+=p.first;
        if(cursize>sz){
            break;
        }
        totcl++;
        clients.push_back(p.second);
    }

    cout << totcl << endl;
    for(int x:clients){
        cout << x << " ";
    }
    return 0;
}