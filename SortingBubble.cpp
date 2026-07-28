#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

void bubbleSort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        bool swapped = false;
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }

}

void selectionSort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        swap(v[i],v[min]);
    }

}
void measureTime(void (*func)(vector<int>&) , vector<int> v){
    auto start= high_resolution_clock::now();
    func(v);
    auto end= high_resolution_clock::now();
    auto time = duration<double,micro>(end-start);
    cout << "Execution Time: " << time.count() << " us\n";
    for(int x:v){
        cout << x << " ";
    }
}

void stlSort(vector<int> &v){
    sort(v.begin(),v.end());
}
int main(){
    vector<int> vec= {2,4,3,1,5,23,46,12,34,23,11,10,76,54,93,27,39,42,33,22};
    measureTime(bubbleSort,vec);
    return 0;
}