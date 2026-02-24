#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,5,7,8,2,3};
    int n=8;
    int k=3;
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum+=arr[i];
    }
    int maxSum = windowSum;
    for(int i=k;i<n;i++){
        windowSum= windowSum - arr[i-k] + arr[i];
        maxSum= max(maxSum,windowSum);
    }
    cout << "Maximum Sum :"<< maxSum<<endl;
    return 0;
}