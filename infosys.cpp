#include <bits/stdc++.h>
using namespace std;
int main(){
    string N;
    cin >> N;
    int wr =0;
    for(int i=0;i<N.length();i++){
        if(i%2==0){
            wr+= (N[i]-'0');
        }else{
            wr-=(N[i]-'0');
        }
    }
    for(int i=0;i<N.length();i++){
        string temp = N;
        temp.erase(i,1);
        int tempsum=0;
        for(int j=0;j<temp.length();j++){
             if(j%2==0){
                tempsum+= (temp[j]-'0');
             }else{
                tempsum-= (temp[j]-'0');
             }
        }
        wr= max(wr,tempsum);
    }

    cout << wr << endl;
    return 0;
}