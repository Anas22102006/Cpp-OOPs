#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout << "A"<< endl;
    }
};
int main(){
    A obj;
    obj.show();
    return 0;
}