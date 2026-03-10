#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        int digit=x%10;
        int length= to_string(x).length();
        int count = (digit-1)*10 +((length*(length+1))/2);
        cout << count << endl;
    }
}