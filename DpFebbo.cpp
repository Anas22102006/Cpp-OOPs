#include <bits/stdc++.h>
using namespace std;
int dpcount=0;
int reccount=0;
int recfib(int n){
    reccount ++;
    if(n<=1){
        return n;
    }
    return recfib(n-1) + recfib(n-2);
}
int fib(int n, vector<int>& dp){
    dpcount ++;
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}
int main(){
    int n=10;
    vector<int> dp(n+1,-1);
    cout << fib(n,dp) <<" "<< dpcount << endl;
    cout << recfib(n) << " " << reccount <<endl;
    return 0;
}