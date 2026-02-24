#include <bits/stdc++.h>
using namespace std;
class Test{
    int data_;
    public:
    Test(int n): data_(n){}
    friend void display(Test a);

};
void display(Test a){
    cout << "Data = "<< a.data_<< endl; //Accesicble becoz of friend declaration;
}
int main(){
    Test t1(77);
    display(t1);
    return 0;
}
int main (){
    
}
