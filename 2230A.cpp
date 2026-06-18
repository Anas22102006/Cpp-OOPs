#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int n,ik,gk;
        cin >> n >> ik >> gk;
        long long min= 0;
        int temp = n/3;
        long long trail= (n*ik);
        long long group = ((temp*gk)+((n-(temp*3))*ik));
        if (n<=3){
            if(n*ik > gk){
                min = gk;
            }
            else{
                min = n*ik;
            }
        }

        else if(trail > group ){
            min = group;
        }
        cout << min << endl;

    }

}