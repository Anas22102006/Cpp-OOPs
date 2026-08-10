#include <bits/stdc++.h>
#include <thread>
#include <mutex>
using namespace std;
mutex m;
void print(int data){
    lock_guard<mutex> lock(m);
    cout << "Thread "<< data << endl;
}
int main(){
    thread t1(print,1);
    thread t2(print,2);
    thread t3(print,3);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}