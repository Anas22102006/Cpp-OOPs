#include <iostream>
using namespace std;
int main(){
    double d= 5.6;
    double *p= &d;
    int *i=(int*)p;
    int j=1000;
    short l;
    cin >> l;
    if(sizeof(l) ==2){
        cout<< "Yes short"<<endl;
    }
    else{
        cout<< "Not short"<< endl;
    }
    cout<< *p << endl;
    cout << sizeof(int);
    cout<< sizeof(j)<<endl;
    return 0;
}