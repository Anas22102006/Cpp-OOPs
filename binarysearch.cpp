#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {1,2,5,7,12,13,17,29,33,41,43,49,50,51,53};
    int key;
    cin >> key;
    int low=0 , high = v.size()-1;
    bool found= false;
    if(key < v[low] || key > v[high]){
        cout << "Not Found" << endl;
        return 0;
    }
    if(key == v[low || key == v[high]]){
        cout << "Found" << endl;
        return 0;
    }
    while(low<high){
        int mid= (low+high) /2;
        if(v[mid]==key){
            found=true;
            break;
        }
        else if(v[mid] >key){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    if(found) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    return 0;
}