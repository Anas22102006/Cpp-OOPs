#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , x ,y;
    cin >> a >> x >> y;
    if(x>0 && x< a && y>0 && y<=a){
        cout << 0 << endl;
    }
    else if(((x==a || x==0) || (y==a || y==0)) && ((x<=a || x>=0) || (y<=a || y>=0))){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    return 0;
}