#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int size = sizeof(arr);
    int sum=0;
    // string a;
    // cin>>a;
    for (int i=0;i<size;i++){
      sum+=arr[i];
    
    }
    cout<<sum;
    return 0;
}